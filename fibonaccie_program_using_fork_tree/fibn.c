#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

// Function to recursively calculate the Fibonacci number
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Process tree function to find Fibonacci number
void process_tree(int n) {
    if (n < 2) {
        printf("Process %d (PID: %d) finds Fibonacci(%d) = %d\n", getpid(), getpid(), n, n);
        exit(n);
    }

    pid_t pid1, pid2;
    int status1, status2;

    pid1 = fork();
    if (pid1 == 0) {
        // Child process to find Fibonacci(n-1)
        process_tree(n - 1);
    } else {
        pid2 = fork();
        if (pid2 == 0) {
            // Child process to find Fibonacci(n-2)
            process_tree(n - 2);
        } else {
            // Parent process waits for both children
            waitpid(pid1, &status1, 0);
            waitpid(pid2, &status2, 0);
            int fib1 = WEXITSTATUS(status1);
            int fib2 = WEXITSTATUS(status2);
            int fib = fib1 + fib2;
            printf("Process %d (PID: %d) finds Fibonacci(%d) = %d\n", getpid(), getpid(), n, fib);
            exit(fib);
        }
    }
}
int main() {
    printf("Enter value of n: ");
    int n;
    scanf("%d",&n);
    //int n = 5;  // Change this value to find different Fibonacci numbers
    process_tree(n);
    return 0;
}
