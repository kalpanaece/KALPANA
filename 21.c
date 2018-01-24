#include<stdio.h>
int main()
{
int a,d,n,i;
intsum=0;
printf("enter the 1 st term values of arithmetic progression on series:");
scanf("%d",&a);
printf("enter total number in the arithmetic progression series:");
scanf("%d",&n);
printf("enter the common difference of arithmetic progression series:");
scanf("%d",&d);
sum=(n*(2*a+(n-1)*d))/2;
tn=a+(n-1)*d;
printf("sum of the arithmetic progression on series:");
for(i=a;i<n;i=i+d)
{
if(i!=n)
}
{
printf("%d",i);
}
else
{
printf("%d=%d",i,sum);
}
return 0;
}
