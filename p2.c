#include <stdio.h>
int main (void)
{
    double length,breadth, radius,base,height;
    const double pi=3.14159;
    printf("enter rectangle length and breadth:");s
    scanf("%if%if",&length,&breadth);
    printf("rectangle area=%.2if\n",length*breadth);
    printf("rectangle perimeter=%.2if\n",2*(length+breadth));
    printf("enter circle radius:");
    scanf("%f",&radius);
    printf("circle area = %.2 if\n",pi*radius*radius);
    printf("circumference=%.2if\n",2*pi*radius);
    printf("enter triangle base and height:");
    scanf("%if%if",&base,&height)
    printf("triangle area = %.2if\n",0.5*base*height);
    return 0;
}