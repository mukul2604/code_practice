#include<stdio.h>

int arr[1024];
int main () {
	int n;
	scanf("%d",&n);
	int i,j;
	
	for(i=0;i<1024;i++) arr[i] = 0;
	
	for  (i =1; i <= n-1; i++) {
		printf("I=%d::\n",i);
		for(j = i+1; j <= n; j ++) {
			arr[i-1]++;
			arr[j-i-1]++;
			arr[n-j]++;
			printf("J=%d:: t_%d + t_%d + t_%d \t\t",j,(i-1), (j-i-1), (n-j));
		}
		printf("\n");
	}

	for (i=0; i<n;i++) printf("t_%d = %d\n", i , arr[i]);
	return 0;
}
