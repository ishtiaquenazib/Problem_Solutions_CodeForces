#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    int t;
    cin >> t;

    while (t--)
    {
        cin >> s;
        if (s.length() > 10)
        {
            cout << s[0] << (s.length() - 2) << s.at(s.length() - 1) << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
}