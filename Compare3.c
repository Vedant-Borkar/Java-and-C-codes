#include<stdio.h>
void main()
{
 int num1,num2,num3,min,max;
 printf("Enter 3 numbers\n");
 scanf("%d%d%d",&num1,&num2,&num3);
 if(num1>=num2&&num1>=num3)
 {max=num1;
 if(num2>num3)
 {
  min=num3;
 }
 else{min=num2;}
 }
 else if(num3>=num2&& num3>=num1)
 {max=num3;
 if(num2>num1)
 {
  min=num1;
 }
 else{min=num2;}
 }
 else if(num2>=num3&&num2>=num1)
 {
  max=num2;
  if(num3>num1)
 {
  min=num1;
 }
 else{min=num3;}
 }


  printf("Max= %d and Min= %d",max,min);
}
