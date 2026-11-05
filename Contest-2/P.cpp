#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            cnt1++;
        if (s[i] >= 'A' && s[i] <= 'Z')
            cnt2++;
    }

    if (cnt1 >= cnt2)
    {
        for (char c : s)
        {
            char x = tolower(c);
            cout << x;
        }
    }
    else
    {
        for (char c : s)
        {
            char x = toupper(c);
            cout << x;
        }
    }

    return 0;
}