#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s, v, str;
    cin >> s;
    int l = s.size();
    for (int i = 0; i < l; i++)
    {
        if ((s[i] >= 0 && s[i] <= 9) || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            if ((s[i] >= 'A') && (s[i] <= 'Z'))
            {
                s[i] = s[i] + 32;
                v += s[i];
            }
            else
                v += s[i];
        }
        else
            continue;
    }
    str = v;
    reverse(str.begin(), str.end());
    if (str == v)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}