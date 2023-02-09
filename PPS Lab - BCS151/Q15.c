#include<stdio.h>
int main(){
	int n,a,sum=0;
	scanf("%d",&n);
	for(int i=1;n!=0;i++){
		a=n%10;
		sum+=a;
		n=n/10;
	}
	printf("%d\n",sum);
	return 0;
}