#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int start, int mid, int end)
{
    vector<int> temp;
    int i = start, j = mid + 1;
    while (i <= mid && j <= end)
    {
        if (a[i] < a[j])
        {
            temp.push_back(a[i]);
            i++;
        }
        else
        {
            temp.push_back(a[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        temp.push_back(a[i]);
        i++;
    }
    while (j <= end)
    {
        temp.push_back(a[j]);
        j++;
    }

    for (int idx = 0; idx < temp.size(); idx++)
    {
        a[idx + start] = temp[idx];
    }
}

void mergeSort(int a[], int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        mergeSort(a, start, mid);   // for left half
        mergeSort(a, mid + 1, end); // for right half
        merge(a, start, mid, end);
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
    mergeSort(a, 0, n - 1);
    for (int val : a)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}