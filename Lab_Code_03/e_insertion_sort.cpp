// insertion sort
#include <bits/stdc++.h>
using namespace std;
void insertioSort()
{
    int n;
    cout << "Enter Array Size: ";
    cin >> n;
    int a[n];
    cout << "Enter Array Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i < n; i++)
    {
        int temp = a[i];
        int j = i - 1;
        while ((temp < a[j]) && (j >= 0))
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = temp;
    }

    cout << "Sorted Array in Ascending Order: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}

int main()
{
    insertioSort();
    return 0;
}
