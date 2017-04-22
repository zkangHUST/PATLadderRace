#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
	int n;
	string gender;
	float hight;
	cin>>n;
	getchar();
	while(n--)
	{
		cin>>gender>>hight;
		if(gender.compare("M")==0)
			printf("%.2f\n",hight/1.09);
		else
			printf("%.2f\n",hight*1.09);		
	}
	return 0;
}
