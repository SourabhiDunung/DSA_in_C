 
#include<stdio.h> 
int bs(int a[50],int key,int low,int high) 
{ 
 int mid; 
 mid=(low+high)/2; 
 while(low<=high) 
 { 
  if(a[mid]==key) 
   return mid; 
  else if(a[mid]<key) 
   low=mid+1; 
  else 
   high=mid-1; 
 } 
 mid=(low+high)/2; 
 return -1; 
} 
 
int main() 
{ 
 int a[50],i,n,key,mid,result; 
 puts("Enter no. of elements: "); 
 scanf("%d",&n); 
 puts("Enter the array"); 
 for(i=1;i<=n;i++) 
 { 
  scanf("%d",&a[i]); 
 } 
 puts("Enter to be searched element: "); 
 scanf("%d",&key); 
 result = bs(a,key,0,n-1); 
 if(result==-1) 
 { 
  printf("Element not found"); 
 } 
 else 
 { 
  printf("Element found at index at %d\n",result); 
 } 
} 
