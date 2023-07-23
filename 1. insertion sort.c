#include<stdio.h>
int main()
{
	int i,j,n,temp,a[70];
	printf("Enter number of elements in array: ");
	scanf("%d",&n);
	printf("\nEnter elememts in array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nUnsorted array: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	//logic for insertion sort
	for(i=1;i<n-1;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>0&&a[j]>temp)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
	printf("\nSorted array: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
