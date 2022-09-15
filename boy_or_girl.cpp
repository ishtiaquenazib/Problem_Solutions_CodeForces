#include <bits/stdc++.h>
using namespace std;

#define PB push_back

typedef vector<int> vi;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string content;
    cin >> content;
    // xiaodao
    // sevenkplus
    // wjmzbrm

    for (int i = 0; i < content.size(); ++i)
    {
        char check = content[i];
        int j = i + 1;
        while (j < content.size())
        {
            if (check == content[j])
            {
                content.erase(j, 1);
            }
            else
            {
                ++j;
            }
        }
    }
    int length = content.length();
    if (length % 2 != 0)
    {
        cout << "IGNORE HIM!" << endl;
    }
    else
    {
        cout << "CHAT WITH HER!" << endl;
    }

    return 0;
}
