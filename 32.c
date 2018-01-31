#include<stdio.h>
#include<string.h>
void main()
{
char s[200];
int count=0,i;
printf("enter the string \n");
scanf("%d[^\n]s",s);
for(i=0;s[i]!='i';i++)
{
if(s[i]=='')
count ++;
}
printf("number of words in the given strings are %d \n ",count ++);
}
