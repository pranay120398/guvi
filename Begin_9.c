#include<stdio.h>
void main(){
	int arr[100],N,K,s=0,i;
	printf("\n Enter no. of INPUTS : ");
	scanf("%d",&N);
	printf("\n Enter Numbers : ");
	for(i = 0; i < N; i++){
		scanf("%d",&arr[i]);
	}
	printf("\n Enter value of K : ");
	scanf("%d",&K);
	for(i = 1; i <= K; i++){
		s += i;
	}
	printf("%d",s);
}
