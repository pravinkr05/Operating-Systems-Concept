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

shmid=shmget((key_t)1122,1024,0666|IPC_CREAT);
printf("key of shared memory is %d \n",shmid);
str=shmat(shmid,NULL,0);
printf("process attached at %p\n",str);
printf("Enter to send the year's data : \n");
read(0,buff,100);
strcpy(str,buff);
printf("you wrote %s",str);
printf("======================================================================\n\n");


}
