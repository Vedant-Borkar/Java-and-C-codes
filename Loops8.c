#include<stdio.h>
int main()
{
 int i,j,n,k;
 printf("Enter number of rows\n");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n-i;j++)
  {
   printf(" ");
  }
  for(j=1,k=5;j<=i;j++)
  {
   printf("%d",k--);
  }
  printf("\n");
 }
}
