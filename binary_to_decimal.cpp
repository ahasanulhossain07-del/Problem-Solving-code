#include <bits/stdc++.h>
using namespace std;
int main()
{
    int binNum;
    cin >> binNum;
    int ans = 0;
    int pow = 1;
    while (binNum > 0)
    {
        int rem = binNum % 10;
        ans += rem * pow;
        binNum /= 10;
        pow *= 2;
    }
    cout << ans << endl;

    return 0;
}