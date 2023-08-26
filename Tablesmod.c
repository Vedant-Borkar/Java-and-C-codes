#include<stdio.h>
int main(void)
{
 int num,i;
 printf("Enter the number : \n");
 scanf("%d",&num);
 for(i=1;i<=12;i++)
 {
  printf("%d x %d = %d\n",num,i,(i*num));
 }
}
