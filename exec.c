lude<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>
int main()
{
char *cmnd="ls";
char *arg_list[]={"ls","-1",NULL};
printf("before execvp()\n");
printf("creating the another process using fork()\n ");
pid_t status=0;
if(status==0)
{ 
printf("child process\n");
status=execvp(cmnd,arg_list);
}
if (status==-1)
{
printf("incorrect termination\n");
exit(1);
}
else
{
printf("parent process\n");
printf("status: %d\n",status);
printf("now this line will be executed\n");
}
}
