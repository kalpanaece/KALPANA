#include<stdio.h>
int main()
{
    int a=123;
    printf("enter the number");
    scanf("%d",&a);
    a-=1;
    while(a%2!=0)
    {
        a--;
    }
    printf("%d",a);
    return 0;
    
}
