#include<stdio.h>
int main()
{
	int i,j,n,temp,a[70];
	printf("Enter number of elements in array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nUnsorted array: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	//bubble sort logic
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j+1]<a[j])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nSorted array: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
