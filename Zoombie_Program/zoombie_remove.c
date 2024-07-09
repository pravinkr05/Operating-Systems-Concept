#include <stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main()
{
       pid_t p;
       p=fork();
   if(p==0){
        
       printf("i am child having pid %d\n",getpid());
       printf("my parents pid %d\n",getppid());
   }
   else{
      //sleep(3);
      wait(NULL);
       printf("i am parent having pid %d\n",getpid());
       printf("my child pid %d\n",p);
   }

    return 0;
}
