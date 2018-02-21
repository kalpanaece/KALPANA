#include<stdio.h>
#include<conio.h>
int main()
{
int a=123,n,sum=0;
while(a<=0)
{
n=a%10;
sum=sum+n;
printf("%d",sum);
}
return 0;
getch();
}
