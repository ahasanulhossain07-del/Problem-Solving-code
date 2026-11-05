#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        double k;
        cin>>a>>b>>k;
        int distance=abs(b-a);
        int steps=ceil(distance/k);
        cout<<steps<<endl;
    }

    return 0;
}