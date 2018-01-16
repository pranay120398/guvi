#include<stdio.h>
#include<stdbool.h>
bool leapyear(int y){
	return(((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
}
void main(){
	int year;
	printf("\n Input : ");
	scanf("%d",&year);
	leapyear(year) ? printf("\n YES") : printf("\n NO");
}
