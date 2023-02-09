#include<stdio.h>
#include<math.h>
int main(){
	int n, o_n,sum=0,d;
	scanf("%d",&n);
	o_n=n;
	while(n!=0){
		d=n%10;
		sum+=pow(d,3);
		n=n/10;
	}
	if(sum==o_n){
		printf("Armstrong\n");
	}
	else{
		printf("Not an Armstrong\n");
	}
	return 0;
}