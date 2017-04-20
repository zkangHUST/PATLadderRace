#include<stdio.h>
int main()
{
	int book[128]={0};
	char a[10005], c;
	fgets(a,10005,stdin);
	while((c=getchar())!='\n')
		book[c]=1;
	char *p=a;
	for(;*p!='\n';p++)
	{
		if(book[*p]==0)
			putchar(*p);
	}	
	return 0;
}

