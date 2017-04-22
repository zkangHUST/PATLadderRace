#include<cstdlib>
#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n,k,m,i,score,sum=0;
	int max=0,min=101;
	float ave;
	vector<float> s;
	cin>>n>>k>>m;
	while(n--)
	{
		for(i=0;i<k;i++)
		{
			cin>>score;
			if(score<min)
				min = score;
			if(score>max)
				max = score;
			sum+=score;
		}
		sum=sum-max-min;
		ave =(float)sum/(k-2);
		s.push_back(ave);
		sum = 0;
		max = 0;
		min = 101;
	}
	sort(s.begin(),s.end());
	i=s.size()-m;
	while(i<s.size())
	{
		printf("%.3f",s[i]);
		if(i!=s.size()-1)
			printf(" ");
		i++;
	}
	return 0;
}
