#include<stdio.h>
void main() {
	int n, i,s=0;
	printf("\n Input : ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++){
		s += i;
	}
		printf("%d",s);
}
