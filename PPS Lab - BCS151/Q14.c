#include<stdio.h>
int main(){
	int n,ch=1;
	scanf("%d",&n);
	for(int i=2;i<n;i++)
		if(n%2==0){
			ch=0;
			break;
		}
	if(ch==0)
		printf("Not a prime number\n");
	else
		printf("Prime number\n");
	return 0;
}