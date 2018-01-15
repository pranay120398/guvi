#include<stdio.h>
void main(){
	int a,b,c,n;
	printf("\nInput : ");
	scanf("%d%d%d",&a,&b,&c);
	n = a > b ? (a > c ? a : c) : (b > c ? b : c);
	printf("\n%d",n);
}
