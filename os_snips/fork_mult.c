#include<stdio.h>
#include<unistd.h>

int main()
{
	fork();
	printf("First fork\n");
	fork();
	printf("second fork\n");
	fork();
	printf("third fork\n");
	return 0;
}

