#include <bits/stdc++.h>
using namespace std;

#define PB push_back

typedef vector<int> vi;
typedef long long ll;


string insertChar(const string &s) {
   if (!s.size()) {
     return "";
   }
   stringstream s3;
   s3 << s[0];
   for (int i = 1; i < s.size(); i++) {
     s3 << '+' << s[i];
   }
   return s3.str();
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s, s1;
    cin >> s;
    for (int i = 0; i <= s.size(); i++)
    {
        if (i % 2 == 0)
        {
            s1.push_back(s[i]);
            sort(s1.begin(), s1.end());
        }
    }
    cout << insertChar(s1)  << endl;
    return 0;
}
