#include<stdio.h>

int main() {
	int mat1[4][4], mat2[4][4];
	int row1, row2, col1, col2;
	printf("Size of mat1: ");
	scanf("%d %d",&row1, &col1);
	
	printf("mat1: ");				// input for mat1
	for(int i=0;i<row1;i++)
	for(int j=0;j<col1;j++)
	scanf("%d",&mat1[i][j]);
			
	printf("Size of mat2: ");
	scanf("%d %d",&row2, &col2);
	
	printf("mat2: ");				// input for mat2
	for(int i=0;i<row2;i++)
	for(int j=0;j<col2;j++)
	scanf("%d",&mat2[i][j]);
			
	printf("mat1\n");				// printing mat1
	for(int i=0;i<row1;i++){
		for(int j=0;j<col1;j++)
		printf("%d ",mat1[i][j]);
		printf("\n");
	}
	
	printf("mat2\n");				// printing mat2
	for(int i=0;i<row2;i++){
		for(int j=0;j<col2;j++)
		printf("%d ",mat2[i][j]);
		printf("\n");
	}
	
	if((row1==row2) && (col1 == col2)) // Checking Addition condition
	{
		printf("Addition\n");
		for(int i=0;i<row1;i++){
			for(int j=0;j<col2;j++)
			printf("%d ",mat1[i][j]+mat2[i][j]);
			printf("\n");
		}
	}
	else
	printf("Addition is not possible\n");
}