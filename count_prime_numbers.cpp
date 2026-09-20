#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<bool> prime(n + 1, true);

    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == true)
        {
            count++;
            for (int j = i + i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    cout << count << endl;

    return 0;
}