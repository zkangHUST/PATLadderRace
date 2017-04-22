#include<cstdio>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
typedef struct
{
	string name;
	int gender;
	int visit;
}student;
int main()
{
	int n;
	vector<student> s;
	student m;
	cin>>n;
	while(n--)
	{
		cin>>m.gender>>m.name;
		m.visit = 0;
		s.push_back(m);		
	}
	int i=0,j=0;
	for(i=0;i<s.size()/2;i++)
	{
		cout<<s[i].name<<' ';
		for(j=s.size()-1;j>=s.size()/2;j--)
		{
			if(s[j].gender!=s[i].gender&&s[j].visit==0)
			{
				cout<<s[j].name<<endl;
				s[j].visit = 1;
				break;
			}
		}
	}
	return 0;
}
