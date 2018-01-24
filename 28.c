#include<stdio.h>
#define MAX SIZE 1000
int main()
{
int array[MAX SIZE];
int i,n;
printf("enter the size of array:");
scanf("%d",&n);
printf("enter %d elements in the array:",n);
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
printf("/n elements in array are:");
for(i=0;i<n;i++)
{
printf("%d",array[i]);
}
return 0;
}
