#include <stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
       pid_t p;
       p=fork();
   if(p==0){
        sleep(3);
       printf("i am child having pid %d\n",getpid());
       printf("my parents pid %d\n",getppid());
   }
   else{
      
       printf("i am parent having pid %d\n",getpid());
       printf("my child pid %d\n",p);
   }

    return 0;
}
