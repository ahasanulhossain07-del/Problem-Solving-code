#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt1 = 0, cnt0 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            cnt1++;
            cnt0 = 0;
        }
        else
        {
            cnt0++;
            cnt1 = 0;
        }
        if (cnt1 >= 7 || cnt0 >= 7)
        {
            cout << "YES" << endl;
            return 0;
        }
        }
    cout << "NO" << endl;

    return 0;
}