#include<stdio.h>
int main()
{
 int i,num,a,temp,rev=0,count=0;
 printf("Enter a number\n");
 scanf("%d",&num);
 a=num;
 for(i=0;i<100;i++)
 {
  num=num/10;
  count=count+1;
  if(num==0){break;}
 }
 for(i=0;i<count;i++)
 {
  temp=a%10;
  a=a/10;
  rev=rev*10+temp;
 }
 printf("The reversed number is %d",rev);
}
