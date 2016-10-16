#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>

int main()
{
pid_t pid;
	pid = fork();
	int pid1;

	if (pid < 0) {
		fprintf(stderr, "Fork Failed");
		return -1;
	}
	else if (pid == 0) {
		printf("child pid: %d\n",pid);
		printf("child getpid():%d\n", getpid());		
		//excelv("/bin/ls", "ls", NULL);
	}
	else {
		wait(NULL);
		printf("Child Complete\n");
		printf("parent pid: %d\n",pid);
		printf("parent getpid():%d\n", getpid());		
	}
	
	return 0;
}
