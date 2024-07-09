#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/shm.h>
#include<string.h>
#include <sys/ipc.h>
int main(){
char *str;
char buff[100];
int shmid;
printf("\n======================================================================\n");
shmid=shmget((key_t)1122,1024,0666);
printf("key of shared memory is %d \n",shmid);
str=shmat(shmid,NULL,0);
printf("process attached at %p\n",str);
printf("year's data read from shared mem is %s",str);
int a1=atoi(str);
if(a1%4 == 0){
printf("this is leap year \n");
}
else{
printf("this is not leap year\n");
}
printf("======================================================================\n\n");
}
