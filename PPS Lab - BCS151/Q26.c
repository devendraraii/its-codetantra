#include<stdio.h>

int main() {
	int n, a[5][5], b[5][5], sum=0;
	printf("Size: ");
	scanf("%d",&n);
	printf("Mat1: ");
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	
	printf("Mat2: ");
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	scanf("%d",&b[i][j]);
	
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	if(i==j)
	sum += a[i][j]+b[i][j];
	
	printf("Diagonal sum: %d",sum);
}