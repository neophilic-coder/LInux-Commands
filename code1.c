#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>    // for commands like wait and quit
#include<stdlib.h>
#include<sys/wait.h>
int main()
{
	int pid = fork();
	pid_t cpid;
	
	if (pid==0)
	{
		printf("Parent process id:%d\n",getppid());
		printf("Child process id:%d\n",getpid());
		printf("Hello from child\n");
	}
	else if(pid>0)
	{
		cpid=wait(NULL);
		printf("Parent process id:%d\n",getppid());
		printf("Child process id:%d\n",cpid);
		printf("Hello from parent\n");
		sleep(60);
	}
	else
		printf("Fork not successful");
return 0;
}
