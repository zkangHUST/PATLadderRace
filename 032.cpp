#include<algorithm>
#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
	int n;
	char c;
	scanf("%d %c\n",&n,&c);
	string s;
	getline(cin,s);
	int len = s.length();
	reverse(s.begin(),s.end());
	if(n-len>0)
		s.append(n-len,c);//在s后面追加n-len个字符c
	s=s.substr(0,n);
	reverse(s.begin(),s.end());
	cout<<s;
	return 0;
}
