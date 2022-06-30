#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>    
#include<stdlib.h>

int main()
{
int pid = fork(); 

if (pid == 0)   
	printf("Hello from Child\n");
else if (pid>0)    
	printf("Hello from Parent\n");
else
	printf("Fork not successful");
return 0;
}
