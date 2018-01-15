#include<stdio.h>
void main(){
	char x;
	printf("\nINPUT : ");
	scanf("%c",&x);
	if(x > 64 && x < 91 || x > 96 && x < 123){
		if(x == 65 || x == 97 || x == 69 || x == 102 || x == 73 || x == 105 || x == 79 || x == 111 || x == 85 || x == 117)
		printf("\nVowel");
		else
		printf("\nConsonant");
	}
	else
	printf("\nInvalid Character");	
}
