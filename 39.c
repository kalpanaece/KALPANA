#include<stdio.h>
void main()
{
	int a[10]={0,1,2,3,4,5,6,7,8,9};
	int i,j,temp;
	for(i=0;i<=10;i++)
	{
		for(j=i+1;j<=10;j++)
	{
if (a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
for(i=0;i<=10;i++)
{
	printf("%d",a[i]);
}
printf("the maximun number is %d");
}
}
