#include <iostream>
using namespace std;
int main()
{
    int m;
    int cnt = 0;
    while(cin>>m)
    {
        if(m==250)
        {
            cnt++;
            break;
        }
        cnt++;
    }
    cout<<cnt;
    return 0;
}

