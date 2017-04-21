#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
using namespace std;
int getint(string a);
int main()
{
    string A,B;
    cin>>A;//不能使用cin>>A>>B
    getchar();//吃掉空格
    getline(cin,B);//空格后面的部分全部都是B的内容
    int a=0,b=0;
    a=getint(A);
    b=getint(B);
    if(a)
        cout<<a;
    else
        cout<<'?';
    cout<<' '<<'+'<<' ';
    if(b)
        cout<<b;
    else
        cout<<'?';
    cout<<' '<<'='<<' ';
    if(a&&b)
        cout<<a+b;
    else
        cout<<'?';
    return 0;
}
int  getint(string a)
{
    int res=0;
    string::iterator i;
    i=a.begin();
    while(*i!='\0')
    {
        if(*i>='0'&&*i<='9')
            res = res*10 + *i-'0';
        else
        {
            res=0;
            break;
        }
        i++;
    }
    if(res>0&&res<=1000)
        return res;
    else
        return 0;
}
