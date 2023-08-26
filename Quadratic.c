#include<stdio.h>
void main()
{
    int a,b,c;
    float x1,x2;
    printf("Enter the coefficients of quadratic equations: \n");
    scanf("%d%d%d",&a,&b,&c);
    x1=(-b+pow((b*b-4*a*c),0.5))/(2*a);
    x2=(-b-pow((b*b-4*a*c),0.5))/(2*a);
    printf("The roots of the equation are %f and %f.",x1,x2);
}
