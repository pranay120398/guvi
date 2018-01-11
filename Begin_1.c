#include<stdio.h>
void main(){
	int x;
	printf("\nInput : ");
	scanf("%d",&x);
	if(x > 0)
		printf("\nPOSITIVE");
	else
		if(x < 0)
			printf("\nNEGATIVE");
		else
			printf("\nZERO");
}