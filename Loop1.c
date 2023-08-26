#include<stdio.h>
int main(void)
{
 int i,num,fact;
 printf("Enter a number \n");
 scanf("%d",&num);
 fact=1;
 for(i=1;i<=num;i++)
 {
  fact=fact*i;
 }
 printf("The factorial is = %d",fact);
}
