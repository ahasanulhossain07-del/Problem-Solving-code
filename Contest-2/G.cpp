#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int fre[26] = {0};
    for (int i = 0; s[i] != '\0'; i++)
    {
        char val = s[i];
        fre[val - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (fre[i] > 0)
            cout << char(i + 'a') << " " << ":" << " " << fre[i] << endl;
    }

    return 0;
}