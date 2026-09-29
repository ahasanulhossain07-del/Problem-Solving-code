#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int freq = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (freq == 0)
            ans = a[i];
        if (ans == a[i])
            freq++;
        else
            freq--;
    }
    cout << ans << endl;

    return 0;
}