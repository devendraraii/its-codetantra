#include <stdio.h>
void main() {
	int arr[20], number, sum = 0, min = 0, max = 0;
	scanf("%d", &number);
	printf("Elements: ", number);
	for (int i = 0; i < number; i++) {
		scanf("%d", &arr[i]);	
	}
	/* Write your logic here to find the maximum, minimum and average in the given integer array*/
	for(int i=0;i<number;i++){
		for(int j=0;j<number-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(int i=0;i<number;i++)
		sum += arr[i];
	
	printf("Min,max,avg: %d %d %0.2f",arr[0], arr[number-1], (float)sum/number);
}