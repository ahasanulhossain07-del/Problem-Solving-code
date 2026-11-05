#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int l_a=a.length();
    int l_b=b.length();
    string concat=a+b;
    if(!a.empty() && !b.empty())
    {
        char tmp=a[0];
        a[0]=b[0];
        b[0]=tmp;
    }
    cout<<l_a<<" "<<l_b<<endl;
    cout<<concat<<endl;
    cout<<a<<" "<<b<<endl;

    return 0;
}