#include<stdio.h>
int main()
{
	int book[4]={0};
	char c;
	while((c=getchar())!='\n')
	{
		switch(c)
		{
			case 'G':
			case 'g':book[0]++;break;
			case 'P':
			case 'p':book[1]++;break;
			case 'L':
			case 'l':book[2]++;break;
			case 'T':
			case 't':book[3]++;break;			
		}
	}
	while(book[0]!=0||book[1]!=0||book[2]!=0||book[3]!=0)
	{
		if(book[0]>0){
			putchar('G');
			book[0]--;
		}
		if(book[1]>0){
			putchar('P');
			book[1]--;
		}
		if(book[2]>0){
			putchar('L');
			book[2]--;
		}
		if(book[3]>0){
			putchar('T');
			book[3]--;
		}
	}
	return 0;
}
