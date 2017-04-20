#include<stdio.h>
char s[]="I Love GPLT";
int main()
{
	char *p=s;
	while(*p!='\0')
	{
		putchar(*p);
		putchar('\n');
		p++;
	}
	return 0;
}
