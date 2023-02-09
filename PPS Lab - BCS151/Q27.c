#include<stdio.h>
#include<string.h>

int main() {
	char s1[60], s2[60];
	printf("Str1: ");
	scanf("%s",s1);
	printf("Str2: ");
	scanf("%s",s2);

	printf("Str1 Len: %d\n",strlen(s1));
	printf("Str2 Len: %d\n",strlen(s2));
	
	printf("Copied Str: %s\n",s2);
	printf("Concatenated Str: %s\n",strcat(s1,s2));
}