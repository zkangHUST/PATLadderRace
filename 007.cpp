#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s[11]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu","fu"};
	string m;
	cin>>m;
	string::iterator it;
	for(it=m.begin();it!=m.end();it++)
	{
		if(*it=='-')
			cout<<s[10];
		else
			cout<<s[*it-'0'];
		if(it!=m.end()-1)
			cout<<' ';
	}	
	return 0;
}
