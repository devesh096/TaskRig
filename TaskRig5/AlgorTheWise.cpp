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
    int ar1[n][n];
    int ar2[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> ar1[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> ar2[i][j];
        }
    }
    int t, c = 0;
    while (c != 4)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i < j)
                {
                    t = ar1[i][j];
                    ar1[i][j] = ar1[j][i];
                    ar1[j][i] = t;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0, k = n - 1; j < k; j++, k--)
            {
                t = ar1[i][j];
                ar1[i][j] = ar1[i][k];
                ar1[i][k] = t;
            }
        }
        //    for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //          cout<<ar1[i][j]<<" ";
        //     }
        //    cout<<endl;
        // }
        // cout<<endl;

        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (ar1[i][j] != ar2[i][j])
                {
                    c++;
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
                break;
        }

        if (flag == 1)
            continue;

        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
}