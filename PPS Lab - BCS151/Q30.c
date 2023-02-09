#include<stdio.h>

int main()
{
	FILE *fp1, *fp2;
	int ch1, ch2;
	char fname1[10], fname2[10];
	printf("Name of file1: ");
	gets(fname1);
	printf("Name of File2: ");
	gets(fname2);
	
	fp1 = fopen(fname1,"r");
	fp2 = fopen(fname2,"r");
	
	ch1 = getc(fp1);
	ch2 = getc(fp2);
	
	while((ch1!=EOF) && (ch2!=EOF) && (ch1==ch2))
	{
		ch1 = getc(fp1);
		ch2 = getc(fp2);
	}
	if(ch1==ch2)
	printf("Identical Files");
	else if(ch1!=ch2)
	printf("Non-identical files");
}