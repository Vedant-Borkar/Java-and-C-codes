#include<stdio.h>
int main()
{
 int i,j,n,a,hehe=1,count=0,huhu;
 printf("Enter number of rows in the pattern\n");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
 {
  for(j=n-i;j>0;j--)
  {
   printf(" ");
  }
  for(j=1;j<=i;j++)
  {
   printf("%d",hehe);
   hehe++;
  }
  hehe=i+1;

  printf("\n");
 }
 return 0;
}
