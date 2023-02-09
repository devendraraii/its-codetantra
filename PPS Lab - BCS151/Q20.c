#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int ar1[n], ar2[n];
	for(int i=0;i<n;i++){
		printf("ar1[%d]= ",i);
		scanf("%d",&ar1[i]);
	}
	for(int i=0;i<n;i++){
		printf("ar2[%d]= ",i);
		scanf("%d",&ar2[i]);
	}
	for(int i=0;i<n;i++)
		printf("Sum array[%d] = %d\n",i,ar1[i]+ar2[i]);
	
}