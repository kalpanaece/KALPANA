#include<stdio.h>
#include<string.h>
void main()
{
char a[20]="hello world";
int i,c=0;
for(i=0;i<20;i++)
{
if(a[i]=='')
{
c++;
}
}
printf("%d",c+1);
}
