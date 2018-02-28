int main(void) {
	char a[100]="hello.123";
	int i,c=0;
	
	for(i=0;i<100;i++)
	{
		if((a[i]>='A'||a[i]<='Z'||a[i]>='a'||a[i]<='z')&&(a[i]>='0'||a[i]<='9'))
		{
			c++;
		}
		
	
	}
	if(c>0)
	{
		printf("yes");
	}
	return 0;
}
