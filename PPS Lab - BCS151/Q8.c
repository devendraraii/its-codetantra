#include<stdio.h>
#include<math.h>

int convert(long int n) {
	int dec=0, i=0, rem;
	while (n!=0) {
		rem = n%10;
		n /= 10;
		dec += rem*pow(2,i);
		++i;
	}
	return dec;
}
// MAIN
int main() {
	long int bin;
	scanf("%ld",&bin);
	printf("Decimal equivalent = %d",convert(bin));
}