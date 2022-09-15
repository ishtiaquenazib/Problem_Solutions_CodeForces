#include <bits/stdc++.h>
using namespace std;

#define PB push_back

typedef vector<int> vi;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k, n, w;
    cin >> k >> n >> w;
    vi v;
    int i = 1;
    while(i<=w){
        int total = (i * k);
        v.push_back(total);
        ++i;
    }
    int sum = accumulate(v.begin(), v.end(), 0);
    int borrow = sum - n;
    if(borrow >= 0){
        cout << borrow << endl;
    }else{
        cout << "0" << endl;
    }

    return 0;
}
