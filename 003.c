#include<stdio.h>
int main()
{
	int num[10]={0};
	char s[1005];
	scanf("%s",s);
	char *p= s;
	while(*p!='\0')
	{
		num[*p-'0']++;
		p++;
	}
	int i=0;
	for(i=0;i<10;i++)
	{
		if(num[i])
			printf("%d:%d\n",i,num[i]);
	}
	return 0;
}
