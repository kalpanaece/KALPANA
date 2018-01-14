#include<stdio.h>
int main()
{
long long n;
int count=0;
printf("enter a integer");
scanf("%d",&n);
while(n!=0)
{
n/=10;
++ count;
}
printf("number of digits %d",long);
return 0;
}
