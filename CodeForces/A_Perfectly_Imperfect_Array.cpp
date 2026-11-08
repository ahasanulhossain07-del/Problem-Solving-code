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
        int a[n];
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            int squre = sqrt(a[i]);
            if (squre * squre != a[i])
                flag = 1;
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}