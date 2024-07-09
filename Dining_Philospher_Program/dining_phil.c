#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<semaphore.h>
#include<unistd.h>
sem_t chopstick[5];
void *philos(void *);
void eat(int);
int main(){
int n[5];
pthread_t T[5];
for(int i=0;i<5;i++)
sem_init(&chopstick[i],0,1);
for(int i=0;i<5;i++){
n[i]=i;
pthread_create(&T[i],NULL,philos,(void *)&n[i]);
}

for(int i=0;i<5;i++){
pthread_join(T[i],NULL);
}

return 0;
}
void * philos(void * n)
{
int ph = *(int *)n;
printf("philosopher %d wants to eat \n",ph);
printf("philosopher %d tries to pick left chopstick\n",ph);
sem_wait(&chopstick[ph]);
printf("philosopher %d picks the left chopstick\n",ph);
printf("philosopher %d tries to pick right chopstick\n",ph);
sem_wait(&chopstick[(ph+1)%5]);
printf("philosopher %d picks the right chopstick\n",ph);
eat(ph);
sleep(2);
printf("philosopher %d has finished eating\n",ph);
sem_post(&chopstick[(ph+1)%5]);
printf("philosopher %d leave the right chopstick\n",ph);
sem_post(&chopstick[ph]);
printf("philosopher %d leave the left chopstick\n",ph);
}
void eat(int ph){
printf("philosopher %d begins to eat\n",ph);
}
