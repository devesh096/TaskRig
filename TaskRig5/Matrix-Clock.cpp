#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int m, n;

    cin >> m >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    }
    int top = 0, left = 0, right = n - 1, bottom = m - 1;
    int count = 0;

    for (int i = left; i <= right; i++)
    {
        cout << arr[top][i] << " ";
        count++;
    }

    top++;
    for (int j = top; j <= bottom && (count < m * n); j++)
    {
        cout << arr[j][right] << " ";
        count++;
    }
    right--;
    for (int k = right; k >= left && (count < m * n); k--)
    {
        cout << arr[bottom][k] << " ";
        count++;
    }
    bottom--;
    for (int p = bottom; p >= top && (count < m * n); p--)
    {
        cout << arr[p][left] << " ";
        count++;
    }

    return 0;
}
