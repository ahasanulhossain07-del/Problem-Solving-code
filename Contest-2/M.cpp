#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;

    for (int i = 0; i < a.size(); i++)
        a[i] = tolower(a.at(i));
    for (int i = 0; i < b.size(); i++)
        b[i] = tolower(b.at(i));

    int val = a.compare(b);
    if (val < 0)
        cout << -1 << endl;
    else if (val == 0)
        cout << 0 << endl;
    else
        cout << 1 << endl;

    return 0;
}