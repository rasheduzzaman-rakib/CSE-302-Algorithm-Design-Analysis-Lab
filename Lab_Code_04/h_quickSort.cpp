#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int l, int r)
{
    int pivot = a[r];
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if (a[j] <= pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[r]);
    return i + 1;
}

void quickSort(int a[], int l, int r)
{
    if (l < r)
    {
        int q = partition(a, l, r);
        quickSort(a, l, q - 1);
        quickSort(a, q + 1, r);
    }
}

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}

int main()
{
    int n;
    cout << "Enter Size: ";
    cin >> n;
    int a[n];
    cout << "Enter Array Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    quickSort(a, 0, n - 1);
    display(a, n);
    return 0;
}
