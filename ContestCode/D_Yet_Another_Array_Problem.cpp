
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

        long long g = 0;

        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;

            g = __gcd(g, x);
        }

        for (long long x = 2;; x++)
        {
            bool prime = true;

            for (long long j = 2; j * j <= x; j++)
            {
                if (x % j == 0)
                {
                    prime = false;
                    break;
                }
            }

            if (prime && g % x != 0)
            {
                cout << x << endl;
                break;
            }
        }
    }

    return 0;
}
