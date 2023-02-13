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
    int c = 0;
    getline(cin, s);
    int l = s.length();
    if (s[l - 1] == ' ')
        l = l - 1;
    for (int i = l - 1; i >= 0; i--)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
        {

            c++;
        }
        else if (s[i] == ' ')
            break;
    }
    cout << c;
    return 0;
}
