#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	string date;
	cin>>date;
	reverse(date.begin(),date.end());
	reverse(date.begin(),date.begin()+4);
	reverse(date.begin()+5,date.end());
	cout<<date;
	return 0;
}
