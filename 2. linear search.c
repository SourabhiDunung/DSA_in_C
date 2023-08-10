#include<stdio.h>
int main()
{
	int n,i,a[50],key;
	printf("Enter the number of elements in array: ");
	scanf("%d",&n);
	printf("Enter array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the key element: ");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			printf("Element found at %d",i+1);
		}
		if(i==n)
		{
			printf("Element not present in array");
		}
	}
	return 0;
}
