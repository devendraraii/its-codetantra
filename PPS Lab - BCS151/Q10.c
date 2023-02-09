#include<stdio.h>
int sum(int n){
	if (n==1)
		return 1;
	else
		return n+sum(n-1);
}
//MAIN
int main() {
	int num;
	scanf("%d",&num);
	printf("Sum: %d",sum(num));
}