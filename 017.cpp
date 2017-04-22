#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int n,m;
	vector<int> s;
	int sum1=0,sum2=0;
	cin>>n;
	while(n--)
	{
		cin>>m;
		s.push_back(m);		
	}
	sort(s.begin(),s.end());
	int i,j;
	for(i=0,j=s.size()-1;i<j;i++,j--)
	{
		sum1+=s[i];
		sum2+=s[j];
	}
	if(i==j)
		sum2+=s[i];
	int diff = sum2-sum1;
	cout<<"Outgoing #: "<<s.size()-i<<endl;
	cout<<"Introverted #: "<<i<<endl;
	cout<<"Diff = "<<diff<<endl;
	return 0;
}
