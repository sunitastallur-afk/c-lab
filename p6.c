#include <stdio.h>
int main (void)
{
    int choice,a,b;
    printf("1.addition\n");
    printf("2.substraction\n");
    printf("3.multiplication\n");
    printf("4.divistion\n");
    printf("5.remainder\n");
    printf("enter your choice:");
    scanf("%d",&choice);
    printf("enter two integers:");
    scanf("%d%d",&a,&b);
    switch(choice)
    {
        case 1:
        printf("result=%d\n",a+b);
        break;
        case 2:
        printf("result=%d\n",a-b);
        break;
        case 3:
        printf("result=%d\n",a*b);
        break;
        case 4:
        if (b!=0)
        printf("result=%d\n",a/b);
        else
        printf("divison by Zero is not alloved.\n");
        break;
        case 5:
         if (b!=0)
         printf("result=%d\n",a%b);
         else
         printf("remainder with Zero divisior is not alloved.\n");
         break;
         default:
         printf("invalid choice.\n");
        }
        return 0;
    }

            
