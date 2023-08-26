#include<stdio.h>
void main()
{
    int a,b,c;
    float f;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    f=(a+b+c)/3.0;
    printf("The average of the 3 number is %f",f);
}
