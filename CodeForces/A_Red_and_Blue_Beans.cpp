#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long r, b, d;
        cin >> r >> b >> d;
        long long x;
        if (d == 0)
        {
            if (r == b)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            continue;
        }
        else
        {
            int mx = max(r, b);
            int mn = min(r, b);
            d++;
            x = mn * d;
            if (x >= mx)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}