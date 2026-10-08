#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int st, int end)
{
    int idx = st - 1, pivot = a[end];
    for (int j = st; j < end; j++)
    {
        if (a[j] <= pivot)
        {
            idx++;
            swap(a[j], a[idx]);
        }
    }
    idx++;
    swap(a[end], a[idx]);
    return idx;
}

void quickSort(int a[], int st, int end)
{
    if (st < end)
    {
        int pivIdx = partition(a, st, end);
        quickSort(a, st, pivIdx - 1);
        quickSort(a, pivIdx + 1, end);
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    quickSort(a, 0, n - 1);
    for (int val : a)
    {
        cout << val << " ";
    }

    return 0;
}