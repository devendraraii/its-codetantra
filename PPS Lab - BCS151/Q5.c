#include <stdio.h>

int main() {
	int a,b,c;
	printf("Enter 3 numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b && a>c)
		printf("Largest Number= %d\n",a);
	else if(b>c && b>a)
		printf("Largest Number= %d\n",b);
    else
    	printf("Largest Number= %d\n",c);
	return 0;
}