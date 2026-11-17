#include <stdio.h>
int main(void)
{
    double length,breadth,radius,base,height;
    const double pI=3.14159;
    printf("enter rectangle length & breadth:");
    scanf("%f %f",&length,&breadth);
    printf("rectangle area=%f\n",length*breadth);
    printf("rectangle perimeter=%f\n",2*length+breadth);
    printf("enter circle radius:");
    scanf("%f",&radius);
    printf("circle area=%f\n",pI*radius*radius);
    printf("circle circumferefnce=%.21f\n",2*pI*radius);
    printf("enter triangle base&height:");
    scanf("%f%f",&base,height);
    printf("triangle area=%f\n",0.5*base*height);
    return 0;
}