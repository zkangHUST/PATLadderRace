#include<stdio.h>
int get(int n);
int value[10]={0};
int main()
{
	int i,n,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum += get(i);
	}
	printf("%d",sum);
	return 0;
}
int get(int n)
{
	if(n==1)
	{
		value[1]=1;	
	}
	else
	{
		if(value[n-1]!=0)
			value[n]=value[n-1]*n;
		else
			value[n]=n*get(n-1);
	}
	return value[n];
}
