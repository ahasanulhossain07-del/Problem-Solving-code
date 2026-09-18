#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;
        for (int i = 0; i < 51; i++)
        {
            if (i < s.length())
                cout << s[i];
            if (i < t.length())
                cout << t[i];
                }
        cout << endl;
    }

    return 0;
}