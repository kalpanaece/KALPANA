#include<stdio.h>
#include<conio.h>
int main()
{
int hours minutes,total_minutes;
printf("\n enter the time in hours and minutes:\n");
printf("\n hours:\t");
scanf("%d",& hours);
printf("\n minutes:\t");
scanf("%d",&minutes);
total_minutes=(hours*60)+minutes;
printf("\n total time in minutes:\t %d \n",total_minutes);
return 0;
}
