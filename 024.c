#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int m = (n+2)%7;
	m = (m==0)?7:m;
	printf("%d",m);
}
