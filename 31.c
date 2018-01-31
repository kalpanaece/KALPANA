#include<stdio.h>
include<string.h>
int main()
{
int s;
char a[60]="laptop is good";
s=strlen(a)-strlen("\t \t");
printf("%d",s);
return 0;
}
