#include<stdio.h>
int main()
{
 int num,i,rev=0,sum=0,a,temp;
 printf("Enter a number\n");
 scanf("%d",&num);
 a=num;
 while(num>0)
 {
  temp=num%10;
  rev=rev*10+temp;
  num=num/10;
 }
 printf("The reversed number is %d",rev);
  while(a>0)
 {
  temp=a%10;
  sum=sum+temp;
  a=a/10;
 }
 printf("  The sum of digits is %d",sum);
}
