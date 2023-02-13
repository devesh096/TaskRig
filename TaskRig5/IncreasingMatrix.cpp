#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    int arr[n][n];
    int t = 1;
    int top = 0, left = 0, right = n - 1, bottom = n - 1, count = 0;
    while (count < (n * n))
    {
        for (int i = left; i <= right; i++)
        {
            arr[top][i] = t;
            count++;
        }

        top++;
        for (int j = top; j <= bottom && count < (n * n); j++)
        {
            arr[j][right] = t;
            count++;
        }
        right--;
        for (int k = right; k >= left && count < (n * n); k--)
        {
            arr[bottom][k] = t;
            count++;
        }
        bottom--;
        for (int p = bottom; p >= top && count < (n * n); p--)
        {
            arr[p][left] = t;
            count++;
        }
        left++;
        t++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    return 0;
}