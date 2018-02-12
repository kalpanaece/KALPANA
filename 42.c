#include<stdio.h>
#include<string.h>
void main()
{
char a[100],b[100];
int n,m;
scanf("%s %s",&a,&b);
m=strlen(a);
n=strlen(b);
if(m>=n)
{
printf("%s",a);
}
else
{
printf("%s",b);
}
}
