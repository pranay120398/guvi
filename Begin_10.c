#include<stdio.h>
#include<math.h>
void main(){
	long long n,x;
	printf("\n Input : ");
	scanf("%d",&n);
	x = ceil(log10(n + 1));
	printf("\n No. of DIGITS : %d",x);
}
