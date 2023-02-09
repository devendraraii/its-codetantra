#include<stdio.h>

int main() 
{
	int size;
	scanf("%d",&size);
	int arr[size];
	printf("Elements: ");
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
	
	printf("Before sorting: ");
	
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
		
	for(int i=0;i<size;i++){
		for(int j=0;j<size-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("\nAfter sorting: ");
		for(int i=0;i<size;i++)
			printf("%d ",arr[i]);
		printf("\n");
}