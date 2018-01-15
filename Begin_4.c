#include<stdio.h>
void main(){
	char x;
	printf("\nINPUT : ");
	scanf("%c",&x);
	if(x > 64 && x < 91 || x > 96 && x < 123)
		printf("\nAlphabet");
		else
		printf("\nNo");	
}
