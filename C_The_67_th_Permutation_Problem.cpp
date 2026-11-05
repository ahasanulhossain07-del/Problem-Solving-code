#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(3*n+1);
        int cn=1;
        for(int i=1;i<=3*n;i+=3)
        {
            v[i]=cn++;
        }
        for(int i=2;i<=3*n;i++)
        {
            if(v[i]==0)
            {
                v[i]=cn++;
            }
        }
        for(int i=1;i<=3*n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}