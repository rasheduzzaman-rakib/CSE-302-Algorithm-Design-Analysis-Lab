#include <bits/stdc++.h>
using namespace std;
int x[100];
bool isSafe(int k, int i)
{
    for (int j = 1; j <= k - 1; j++)
    {
        if ((x[j] == i) || (abs(x[j] - i) == abs(j - k)))
        {
            return false;
        }
    }
    return true;
}

void solveNQueens(int k, int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (isSafe(k, i))
        {
            x[k] = i;
            if (k == n)
            {
                for (int i = 1; i <= n; i++)
                {
                    cout << x[i] << " ";
                }
                cout << endl;
            }
            else
                solveNQueens(k + 1, n);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    solveNQueens(1, n);
}