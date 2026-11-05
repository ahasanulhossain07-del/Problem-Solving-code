#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int copyN = n;
    int sumOfCubes = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sumOfCubes += (digit * digit * digit);
        n = n / 10;
    }
    if (sumOfCubes == copyN)
        cout << "Armstrong Number" << endl;
    else
        cout << "Not Armstrong Number" << endl;

    return 0;
}