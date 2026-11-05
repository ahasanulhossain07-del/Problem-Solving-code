#include<bits/stdc++.h>
using namespace std;
int main()
{
    string  x,y;
    cin>>x>>y;
    int value=x.compare(y);
    if(value<0)
    cout<<x;
    else if(value==0)
    cout<<x;
    else 
    cout<<y;

    return 0;
}