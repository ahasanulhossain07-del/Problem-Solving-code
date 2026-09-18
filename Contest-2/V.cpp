#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, p;
    cin >> s >> p;
    int i = 0, j = 0;
    int cnt = 0;
    bool unique = true;
    for (int i = 1; i < p.size(); i++)
        if (p[i] != p[i - 1])
            unique = false;

    if (unique)
    {
        vector<int> sizes;
        char c = p[0];
        int size = 0;
        for (char x : s)
        {
            if (x == c)
                size++;
            else
            {
                if (size >= p.size())
                    sizes.push_back(size);
                size = 0;
            }
        }
        if (size >= p.size())
            sizes.push_back(size);
        for (int size : sizes)
        {
            cnt += (size - p.size() + 1);
        }
    }
    else
    {
        while (i < s.size())
        {
            if (s[i] == p[j])
            {
                j++;
            }
            else
                j = 0;
            if (j == p.size())
            {
                cnt++;
                j = 0;
            }
            i++;
        }
    }
    cout << cnt;

    return 0;
}