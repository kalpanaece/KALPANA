#include<stdio.h>
#include<conio.h>
void main()
{
int a[3],i,n=3;
float m;
printf("enter the element:/n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

if(n%2==0)
{
m=(a[n-1/2]+(a[n/2]))/2;
}
else
{
m=a[n/2];
}
printf("\n median is % f",m);
getch();
}
