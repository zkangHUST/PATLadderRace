#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n);
int main()
{
    int n,m;
    cin>>n;
    while(n--)
    {
        cin>>m;
        if(isPrime(m))
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
bool isPrime(int n)
{
    bool flag = 1;
    int i=2;
    if(n<2)
        flag = 0;       
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
