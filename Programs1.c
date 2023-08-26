#include<stdio.h>
int main()
{
 int i,j,n;
 printf("Enter number of rows \n");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n-i;j++)
  {
   printf(" ");
  }
  for(j=i;j>0;j--)
  {
   printf("%d",j);
  }
  for(j=1;j<i;j++)
  {
   printf("%c",(j+64));
  }
  printf("\n");
  }

}
