#include<stdio.h>
void main()
{
    int num,a,b,c;
    printf("Enter 3 digit number : ");
    scanf("%d",&num);
    a=num/100;
    b=num/10;
    b=b%10;
    c=num%10;
    printf("1st digit: %d\n",a);
    printf("2nd digit: %d\n",b);
    printf("3rd digit: %d",c);
}
