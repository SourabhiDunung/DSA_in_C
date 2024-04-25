#include<stdio.h> 
int main() 
{ 
 int a[50],key,n,i; 
 puts("Enter no. of elements: "); 
 scanf("%d",&n); 
 printf("Enter elements: "); 
 for(i=0;i<n;i++) 
 { 
  scanf("%d",&a[i]); 
 } 
 puts("Enter to be searched element: "); 
 scanf("%d",&key); 
 
// logic for linear search 
 for(i=0;i<n;i++) 
 { 
  if(a[i]==key) 
  { 
   printf("%d is present at %d location\n",key,i+1); 
   break; 
  } 
  if(i==n) 
   printf("element is not found"); 
 } 
 return 0; 
}
