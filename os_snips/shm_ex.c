#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/shm.h>
#include <sys/stat.h>

/*PRODUCER and CONSUMER*/
int main()
{
const int SIZE = 4096;
const char *name = "OS";
const char *message_0 = "Hello";
const char *message_1 = "World";

int shm_fd;
void *ptr;

	shm_fd = shm_open(name, O_CREAT | O_RDRW, 0666);
	ftruncate(shm_fd, SIZE);
	ptr = mmap(0, SIZE, PROTO_WRITE, MAP_SHARED, shm_fd, 0);
	
	sprintf(ptr, "%s", message_0);
	ptr += strlen(message_0);
	sprintf(ptr, "%s", message_1);
	ptr += strlen(message_1);
	
	shm_fd = shm_open(name, O_RDONLY, 0666);
	ptr = mmap(0, SIZE, PROT_READ, MAP_SHARED, shm_fd,0);
	printf("%s\n", (char*)ptr);
	shm_unlink(name);	
	return 0;
}

