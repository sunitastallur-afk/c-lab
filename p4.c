#include<stdio.h>
int main(void)
{
    int a,b,c;
    printf("enter three integers:");
        scanf("%d%d%d",&a,&b,&c);
        if (a==b&&b==c)
        {
            printf("all three number are equal.\n");
        }
        else if (a==b)
        {
            if (a>c)
            printf("%d and %d are equal and are the largest.\n",a,b);
                else
                printf("%d is the largest ; the first two number are equal.\n",c);
            }
                if (a==c)
                {
                if (a>b)
                printf("%d and %d are equal and are the largest.\n",a,c);
                else
                printf("%d is the largest; the first and third number are equal.\n",b);
            }
                else if(b==c)
                { 
                if (b>a)
                printf("%d and %d are equal and are the largest.\n",b,c);
                else
                printf("%d is the largest; the second and third numbers areequal.\n",a);
            }
                else
                { 
                if(a>b)
                {
                if(a>c)
                printf("%d is he largest.\n",a);
                else
                printf("%d is the largest.\n",c);
            }
                else
                {
                if (b>c)
                printf("%d is the largest.\n",b);
                else
                printf("%d is the largest.\n",c);
            }
            }
            return 0;
            }
                   


