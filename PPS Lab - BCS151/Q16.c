#include<stdio.h>

int main()
{
	int n ,rem ,rev_num=0;
	scanf("%d",&n);
	while(n>0)
	{
		rem = n%10;
		rev_num = rev_num*10+rem;
		n /= 10;
	}
	printf("Reversed number= %d",rev_num);
}