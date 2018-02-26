#include<stdio.h>
int main()
{
    int digit,a,sum=0;
    printf("enter the num value");
    scanf("%d",&a);
     while (a> 0)
    {
        digit = a % 10;
        sum  = sum + digit;
        a /= 10;
    }   
    printf("%d",sum);
    
}
