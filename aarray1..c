#include<stdio.h>
int main()
{
 int i,j,n,arr[10],a,b;
 printf("Enter number of terms in array\n");
 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 for(i=0;i<n;i++)
 {
  printf("%d\n",arr[i]);
 }

 for(i=0;i<n;i++)
 {
  a=a+arr[i];
 }
 b=a/n;
 printf("The average is ",b);
}
