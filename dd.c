#include<stdio.h>

struct a{
	int c;
	int d;
};

int main () {
	struct a z = {
		.c = 4,
		.d=1213,
	};
	printf("%d\t%d\n", z.c,z.d);
	return 0;
}
	
