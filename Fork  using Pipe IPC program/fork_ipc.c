#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(){
pid_t p;
int fd[2];
pipe(fd);
int a=0;
pid_t q;
p=fork();
if(p==0)
{
close(fd[0]);
printf("i am child1 having pid %d\n",getpid());
a=getpid();
write(fd[1],&a,sizeof(a));
close(fd[1]);
}
else{

q=fork();
if(q==0){

close(fd[1]);
read(fd[0],&a,sizeof(a));
printf("child2 having pid %d\n",getpid());
printf("child2 siblings id %d\n",a);
close(fd[0]);

}
else{
printf("i am parent having pid %d\n",getpid());
printf("my child1 id %d\n",p);
printf("my child2 id %d\n",q);

}}
return 0;
}
