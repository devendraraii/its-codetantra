#include<stdio.h>
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Before Swapping\n");
	printf("x = %d\ny = %d\n",a,b);
	swap(&a,&b);
	printf("After Swapping\n");
	printf("x = %d\ny = %d\n",a,b);
}