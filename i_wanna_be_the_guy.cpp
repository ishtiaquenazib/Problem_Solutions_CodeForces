#include <bits/stdc++.h>
using namespace std;

#define PB push_back

typedef vector<int> vi;
typedef long long ll;

int printVec(vi &k)
{
    for (int i = 0; i < k.size(); i++)
    {
        cout << k[i] << " ";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, a, b;
    cin >> n;
    cin >> a;
    vi x, y;
    for (int i = 0; i < a; i++)
    {

        int p;
        cin >> p;
        x.push_back(p);
    }

    cin >> b;

    for (int i = 0; i < b; i++)
    {
        int q;
        cin >> q;
        y.push_back(q);
    }
    vi v1;
    for (int i = 0; i < x.size(); i++)
    {
        v1.push_back(x[i]);
    }
    for (int i = 0; i < y.size(); i++)
    {
        v1.push_back(y[i]);
    }

    for (int i = n; i > 0; i--)
    {
        auto it = find(v1.begin(), v1.end(), i);
        if (it == v1.end())
        {
            cout << "Oh, my keyboard!" << endl;
            goto Jump;
        }
    }

    cout << "I become the guy." << endl;
Jump:
    cout << "" << endl;

    return 0;
}