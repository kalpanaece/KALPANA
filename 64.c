#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the number");
	scanf("%d %d",&a,&b);
	c=a+b;
	if(c%2==0)
	{
	printf("the number is odd");
	}
           else
           {
           printf("the number is even");
           }
}
