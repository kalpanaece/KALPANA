#include<stdio.h>
int main()
{
int a1,b1;
scanf("%d %d",&a1,&b1);
a1=a1^b1;
b1=a1^b1;
a1=a1^b1;
printf("%d %d",a1,b1);
return 0;
}
