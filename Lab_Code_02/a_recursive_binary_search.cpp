#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int b, int e, int x)
{
    if (b > e)
    {
        return -1;
    }
    int mid_index = (b + e) / 2;
    if (a[mid_index] == x)
    {
        return mid_index;
    }
    else if (x > a[mid_index])
    {
        return binarySearch(a, mid_index + 1, e, x);
    }
    else
    {
        return binarySearch(a, b, mid_index - 1, x);
    }
}
int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cout << "Element to Search: ";
    cin >> x;
    int foundIndex = binarySearch(a, 0, n - 1, x);
    if (foundIndex != -1)
    {
        cout << "YES found at: " << foundIndex << endl;
    }
    else
    {
        cout << "Not Found!" << endl;
    }

    return 0;
}
