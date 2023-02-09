#include<stdio.h>
int even(int);
int odd(int);
int main()
{
	int n;
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("Odd numbers sum: %d\n",odd(n));
		printf("Even numbers sum: %d\n",even(n));
	}
	else{
		printf("Wrong input\n");
	}
	
	return 0;
}
int even(int a)
{
	int sum=0;
	for(int i=1;i<=a;i++)
	{
		if(i%2==0){
			sum+=i;
		}
	}
	return sum;
	}
	int odd(int a){
		int sum=0;
		for(int i=1;i<=a;i++){
			if(i%2!=0){
				sum+=i;
			}
		}
		return sum;
	}