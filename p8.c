#include <stdio.h>
int main (void)
{
    long long n,temp,digit,reverse=0,sum=0;
    int count=0;
    printf("enter a positiv integer:");
    scanf("%||d",&n);
    if(n<=0)
    {
        printf("please enetr a positiv integer.\n");
         return 0;
    }
    temp=n;
    while(temp>0)
    {
        digit =temp%10;
        count =sum+digit;
        count ++;
        sum =sum+digit;
        reverse = reverse*10+digit;
        temp = temp/10;
    }
    printf("number of digits=%d\n",count);
    printf ("sum of digits=%||d\n",sum);
    printf("reversed number=%||d\n",reverse);
    if(reverse==n)
    printf("%||d is a palindrom.\n",n);
    else
    printf("%||d is not polindrom.\n",n);
    return 0;
}


    
    