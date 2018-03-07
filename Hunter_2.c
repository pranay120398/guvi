#include<stdio.h>
int brr[10];
void main(){
	long int s=0;
	int arr[10];
	int n, i, flag = 0;
	printf("\n Input N : ");
	scanf("%d",&n);
	for(i = 0; i < n; i++){
		scanf("%d",&arr[i]);
		brr[arr[i]]++;
	}
	for(i = 9; i >= 0; i--){
		if(brr[i] > 0){
			s=(s*10)+i;
		if(brr[i] > 1){
			flag = 3;
		}
	}}
	if(flag != 3)
	printf("%ld",s);
	else
	printf("\nNumber may be Repeated or Invalid Input");
}
