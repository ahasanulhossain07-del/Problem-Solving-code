#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int n;
    cin >> n;
    int fre[26] = {0};
    for (int i = 0; i<n; i++)
    {
        char c;
        cin>>c;
        fre[c - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        int cnt = fre[i];
        char c = char(i + 'a');
        for (int j = 0; j < cnt; j++)
            cout << c;
    }
    cout << '\n';

    return 0;
}