#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int temp;
	if(a>b)
	{
		temp=a;
		a = b;
		b= temp;
	}
	if(b>c)
	{
		temp=b;
		b = c;
		c = temp;
	}
	if(a>b)
	{
		temp=a;
		a = b;
		b= temp;
	}
	cout<<a<<"->"<<b<<"->"<<c;
	return 0;
}
