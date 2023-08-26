#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter 1st number\n");
    scanf("%d",&a);
    printf("Enter 2nd number\n");
    scanf("%d",&b);
    if(a>b)
        printf("A is greater than B");
    else if(b>a)
        printf("B is greater than A");
    else
        printf("A is equal to B");
}
