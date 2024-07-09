#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

int main() {
    int fd[2], fd1[2];
    char bf[100];
    char bf1[100];
    char s[100]; 
    char s1[100]; 
    pid_t p;

    pipe(fd);
    pipe(fd1);
    p = fork();
    
while(1){

    if (p == 0) {
        // Child process
     
            // Read from parent through fd1
            read(fd1[0], bf1, sizeof(bf1));
            printf("Child process received data: %s\n\n", bf1);

            // Send reply to parent through fd
            printf("Child process sending data: ");
            fgets(s1, sizeof(s1), stdin);
            s1[strlen(s1) - 1] = '\0'; // Remove newline character from input
            write(fd[1], s1, strlen(s1) + 1); // Include null terminator in write
        
    } else if (p > 0) {
        // Parent process
        
            // Send message to child through fd1
            printf("Parent process sending data: ");
            fgets(s, sizeof(s), stdin);
            s[strlen(s) - 1] = '\0'; // Remove newline character from input
            write(fd1[1], s, strlen(s) + 1); // Include null terminator in write

            // Read reply from child through fd
            read(fd[0], bf, sizeof(bf));
            printf("Parent received msg: %s\n\n", bf);

    } else {
        perror("fork");
        return 1;
    }

}
    return 0;
}
