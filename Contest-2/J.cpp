#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool print = false;

    for (char c : s)
    {
        string out;
        out += c;
        if (c == '?')
        {
            print = true;
            continue;
        }
        if (c == '=')
            out = ": ";
        if (c == '&')
            out = "\n";

        if (print)
            cout << out;
    }

    return 0;
}