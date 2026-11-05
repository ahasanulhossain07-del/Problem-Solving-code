#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int target;
    cin >> target;
    int i = 0, j = n - 1;
    int pairSum = 0;
    while (i < j)
    {
        pairSum = v[i] + v[j];
        if (pairSum < target)
            i++;
        else if (pairSum > target)
            j--;
        else
        {
            cout << i << " " << j;
            break;
        }
    }

    return 0;
}