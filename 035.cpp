#include <iostream>
#include<vector>
using namespace std;
int main()
{
    string m;
    vector<string> s;
    while(cin>>m)
    {
        if(m.compare(".")==0)
            break;
        else
            s.push_back(m);
    }
    if(s.size()>=14)
        cout<<s[1]<<" and "<<s[13]<<" are inviting you to dinner...\n";
    else if(s.size()<14&&s.size()>=2)
        cout<<s[1]<<" is the only one for you...\n";
    else
        cout<<"Momo... No one is for you ...\n";
    return 0;
}

