#include<stdio.h>
int main(void)
{
 int  i,a=0,b=1,c,num;
 printf("Enter number of terms in the fibonacci \n");
 scanf("%d",&num);
 printf("%d %d ",a,b);
 for(i=1;i<=num-2;i++)
 {
  c=a+b;
  printf("%d ",c);
  a=b;
  b=c;
 }
}
