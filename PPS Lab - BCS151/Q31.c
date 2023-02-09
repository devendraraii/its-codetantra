#include<stdio.h>
void main() {
	FILE *fptr;
	int word = 0;
	int len = 255;
	char search[255], path[255], line[255];
	printf("Word: ");
	scanf("%s",search);
	printf("Name of file: ");
	scanf("%s",path);
	fptr = fopen(path,"r");
	while(fgets(line,len,fptr))
	{
		char *ptr = strstr(line,search);
		if(ptr != NULL)
		{
			word = 1;
			break;
		}
	}
	fclose(fptr);
	if(word==1)
		printf("Word exists.\n");
	else 
		printf("Word doesn't exist.\n");
}