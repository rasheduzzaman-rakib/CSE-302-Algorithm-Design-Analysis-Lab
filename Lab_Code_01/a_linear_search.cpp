#include <bits/stdc++.h>
using namespace std;

void linearSearch(int size)
{
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    int x;
    cin >> x;
    int foundIndex = -1;

    for (int i = 0; i < size; i++)
    {
        if (a[i] == x)
        {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1)
    {
        cout << "YES found at: " << foundIndex << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    linearSearch(n);
    return 0;
}
