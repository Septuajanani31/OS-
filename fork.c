#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
pid_t p=fork();
if(p==0)
{
printf("child process");
}
else{
printf("parent process");
wait(NULL);
printf("child has terminated");
}
printf("bye");
exit(1);
}


