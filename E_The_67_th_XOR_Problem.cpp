#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> v(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                ans = max(ans, (v[i] ^ v[j]));
            }
        }
        cout << ans << endl;
    }

    return 0;
}