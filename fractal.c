#include<stdio.h>
#include<stdlib.h>

void printMatrix(char *M, int n) {
	int i, j;
	for (i =0; i < n; i++) {
		for (j=0; j< n;j++) {
			printf("%c ", *(M + i * n + j));
		}
		printf("\n");
	}
}


void delta_fractal(char *M, int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j=0; j < n; j++) {
			if ((i & j) == 0) {
				*(M + i*n + j) = 'X';
			} else {
				*(M + i*n + j) = ' ';
			}
		}
	}
	printf("DELTA_MATRIX:\n");
	printMatrix(M,n);
}

void reverse_delta_fractal(char *M, int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j=0; j < n; j++) {
			if (((n-i-1) & (n-j-1)) == 0) {
				*(M + i*n + j) = 'X';
			} else {
				*(M + i*n + j) = ' ';
			}
		}
	}
	printf("REVERSE_DELTA_MATRIX:\n");
	printMatrix(M,n);
}

int main() {
	int n;
	printf("Enter the matrix order\n");
	scanf("%d", &n);
	char *M = (char *)malloc(n*n*sizeof(char));
	delta_fractal(M,n);
	reverse_delta_fractal(M,n);
	free(M);
	return 0;
}
