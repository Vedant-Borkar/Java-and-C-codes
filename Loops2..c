 #include<stdio.h>
int main()
{
 int i,j,num;
 printf("Enter number of rows");
 scanf("%d",&num);

 for(i=1;i<=num;i++)
 {
  for(j=1;j<=i;j++)
  {
   printf("*");
  }printf("\n");
 }
 i=1;j=1;
 for(i=1;i<num;i++)
 {
  for(j=i;j<num;j++)
  {
   printf("*");
  }printf("\n");
 }

}
