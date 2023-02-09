#include<stdio.h>

int main()
{
	int N,i,j,k;
	printf("Size: ");
	scanf("%d",&N);
	int mat1[N][N], mat2[N][N], multi[N][N];
	
	printf("Mat1: ");		// input for mat1
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			scanf("%d",&mat1[i][j]);
		}
	}
	
	printf("Mat2: ");		// input for mat2
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			scanf("%d",&mat2[i][j]);
		}
	}
	
	for(i=0;i<N;i++){		// Multiplication of mat1 & mat2
		for(j=0;j<N;j++){
			multi[i][j] = 0;
			for(k=0;k<N;k++){
				multi[i][j] += mat1[i][k]*mat2[k][j];
			}
		}
	}
	
	printf("Resultant\n");	// printing result
	for(i=0;i<N;i++){
		for(j=0;j<N;j++) {
		printf("%d\t",multi[i][j]);
		}
		printf("\n");
	}
}

