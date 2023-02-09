int linearSearch(int a[20],int n, int k) 
{
	for(int i=0;i<n;i++){
		if(a[i]==k)
			return i;
	}
	return -1;
}

void read(int a[20], int n)
{
	printf("Elements: ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}