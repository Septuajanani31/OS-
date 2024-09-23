#include<unistd.h>
pid_t fork(void)
#include<stdio.h>
#include<sys/types.h>
int main()
{
pid_t p=fork();
pid_t p1=fork():
if(p<0)
{
printf("fork fail");
exit(1);
}
printf ("hello all,My process id is: % d\n",getpid());
}

