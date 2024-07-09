#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(){
pid_t p;
pid_t q;
int fd[2];

pipe(fd);

int a=0;
p=fork();

if(p==0)
{

close(fd[0]);

a=getpid();
write(fd[1],&a,sizeof(a));

close(fd[1]);

}
else{

q=fork();
if(q==0){

close(fd[1]);

read(fd[0],&a,sizeof(a));

printf("\nmy parent's pid %d\n",getppid());
printf("i am child2 having pid %d\n",getpid());
printf("i am child2 and my siblings id %d\n\n",a);

close(fd[0]);

}


}

return 0;
}
