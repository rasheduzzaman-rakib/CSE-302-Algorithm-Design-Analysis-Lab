#include <bits/stdc++.h>
using namespace std;

void Merge_S(int a[], int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;
    int leftArray[n1 + 1];
    int rightArray[n2 + 1];

    for (int i = 0; i < n1; i++)
    {
        leftArray[i] = a[p + i];
    }
    for (int j = 0; j < n2; j++)
    {
        rightArray[j] = a[q + 1 + j];
    }
    leftArray[n1] = INT_MAX;
    rightArray[n2] = INT_MAX;
    int i = 0;
    int j = 0;
    for (int k = p; k <= r; k++)
    {
        if (leftArray[i] <= rightArray[j])
        {
            a[k] = leftArray[i];
            i++;
        }
        else
        {
            a[k] = rightArray[j];
            j++;
        }
    }
}

void mergeSort(int a[], int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        mergeSort(a, p, q);
        mergeSort(a, q + 1, r);
        Merge_S(a, p, q, r);
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
    int p = 0;
    int r = n - 1;
    mergeSort(a, p, r);
    display(a, n);
    return 0;
}
