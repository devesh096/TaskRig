#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t, c;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        int l = s.size();
        for (int i = 0; i < l; i++)
        {
            c = 0;
            for (int j = 1; j <= i; j++)
            {
                if ((i % j) == 0)
                    c++;
            }
            if (c == 2)
            {
                s[i] = s[i] - 32;
                cout << s[i];
            }

            else
                cout << s[i];
        }

        cout << endl;
    }
    return 0;
}