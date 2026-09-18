#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    while(true)
    {
        int idx=s.find("EGYPT");
        if(idx!=-1)
        {
            s.erase(idx,5);
            s.insert(idx," ");
        }
        else
        break;
    }
    cout<<s<<endl;
   
    return 0;
}