#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string s;
    cin>>s;
    vector<int>fre(26,0);
    for (char c : s)
    {
        c = toupper(c);
        fre[c-'A']++;
    }
    
    
    string x = "EGYPT";
    int cnt = INT_MAX;
    for (char c : x)
        cnt = min(cnt, fre[c - 'A']);
    cout << cnt<<endl;

    return 0;
}