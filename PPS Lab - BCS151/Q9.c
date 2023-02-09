#include<stdio.h>

int main() {
	int a, b;
	char operation;
	scanf("%c %d %d",&operation,&a,&b);
	
	switch(operation) {
		case '+': 
		printf("%d",a+b);
		break;
		
		case '-':
		printf("%d",a-b);
		break;
		
		case '*':
		printf("%d",a*b);
		break;
		
		case '/':
		printf("%d",a/b);
		break;
		
		case '%':
		printf("%d",a%b);
		break;
		
		default:
		printf("Invalid entry");
	}
}