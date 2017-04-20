#include<stdio.h>
int main()
{
	int cnt0=0,cnt1=0,n,m;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&m);
		if(m%2==0)
			cnt0++;
		else
			cnt1++;
	}
	printf("%d %d",cnt1,cnt0);
	return 0;
}
