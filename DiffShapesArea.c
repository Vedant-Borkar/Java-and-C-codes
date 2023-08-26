#include<stdio.h>
void main()
{
    int ch,r,l,b,s;float area;
    printf("Enter the number of the shape for area: \n 1.Circle\n 2.Rectangle\n 3.Square\n 4.Triangle");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("Enter radius: \n");
        scanf("%d",&r);
        area=3.14159*r*r;
        printf("Area= %f",area);
        break;
    case 2:
        printf("Enter length and breadth: \n");
        scanf("%d%d",&l,&b);
        area=l*b;
        printf("Area= %f",area);
        break;
    case 3:
        printf("Enter side length: \n");
        scanf("%d",&s);
        area=s*s;
        printf("Area= %f",area);
        break;
    case 4:
        printf("Enter height and base: \n");
        scanf("%d%d",&l,&b);
        area=0.5*l*b;
        printf("Area= %f",area);
    }
}
