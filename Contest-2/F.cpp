#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int lenght=a.length();
    int i=0;
    int j=lenght-1;
    int flag=1;
    while(i<j)
    {
        if(a[i]!=a[j])
        flag=0;
        i++;
        j--;
    }
    if(flag)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

    return 0;
}