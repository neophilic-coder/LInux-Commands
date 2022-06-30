#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>    
#include<stdlib.h>
int main()
{	
	int pid = fork();  
	if (pid>0){
		printf("Process ID: %d\n",getpid());
		//sleep(60);
		exit(0);} 
	else if(pid==0){
		printf("Hello from Child:\n");
		printf("ID for Parent:%d\n",getppid()); 
		printf("ID for Child: %d\n",getpid());
		printf("Orphan process created successfully");
		exit(0);}
	else
		printf("Fork command was not successful");
	return 0;
}

