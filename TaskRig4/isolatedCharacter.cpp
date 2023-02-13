#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    int a[26] = {0};
    int f = 0;
    cin >> s;
    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        int k = s[i] - 'a';
        a[k] += 1;
    }

    for (int i = 0; i < l; i++)
    {
        int k = s[i] - 'a';
        if (a[k] == 1)
        {
            f = 1;
            cout << i;
            break;
        }
    }
    if (f == 0)
        cout << "-1";

    return 0;
}
