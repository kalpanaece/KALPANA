#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter a and b");
	scanf("%d%d",&a,&b);
	printf("before swapping %d%d",a,b);
	temp=a;
	a=b;
	b=temp;
	{
	printf("after swaping of a,b %d%d",a,b );
	}
	return 0;
}
