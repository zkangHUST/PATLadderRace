#include<iostream>
#include<string>
using namespace std;
int main()
{
    int book[10]={0};
    int arr[10]={0};
    int index[11]={0};
    string phoneNUM;
    cin>>phoneNUM;
    int cnt=0;
    for(string::iterator i = phoneNUM.begin();*i!='\0';i++)
    {
        if(!book[*i-'0'])
        {
            book[*i-'0']=1;
            cnt++;
        }
    }
    int j=0,i=0;
    for(j=9;j>=0;j--)
    {
        if(book[j])
        {
            arr[i]=j;
           book[j]=i;//记录索引位置
            i++;
        }
    }
    j=0;
    for(string::iterator i = phoneNUM.begin();*i!='\0';i++)
    {
        index[j]=book[*i-'0'];
        j++;
    }
    cout<<"int[] arr = new int[]{";
    for(j=0;j<cnt;j++)
    {
        cout<<arr[j];
        if(j<cnt-1)
            cout<<',';
    }
    cout<<"};\n";
    cout<<"int[] index = new int[]{";
    for(j=0;j<11;j++)
    {
        cout<<index[j];
        if(j<10)
            cout<<',';
    }
    cout<<"};";
    return 0;
}
