#include<stdio.h>
void main(){
	int x;
	printf("\nInput : ");
	scanf("%d",&x);
	if(x % 2 == 0)
		printf("\nEVEN");
	else
		printf("\nODD");
}