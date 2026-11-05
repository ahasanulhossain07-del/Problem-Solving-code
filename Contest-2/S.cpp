#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int freq[26] = {0};
    for (char c : s)
    {
        c = tolower(c);
        freq[c - 'a']++;
    }
    int flag = 1;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 0)
            flag = 0;
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO"<<endl;

    return 0;
}