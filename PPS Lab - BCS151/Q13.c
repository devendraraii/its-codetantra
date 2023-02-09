#include<stdio.h>
int main()
{
	int n,tn;
	scanf("%d",&n);
	int fn=0;
	int sn=1;
	printf("0 1 ");
	for(int i=3;i<=n;i++)
	{
		tn=fn+sn;
		printf("%d ", tn);
		fn=sn;
		sn=tn;
	}
	return 0;
}