#include <bits/stdc++.h>
using namespace std;

#define PB push_back

typedef vector<int> vi;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>> n;

    string s;
    cin>>s;

    int count = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == s[i+1]){
            count ++;
        }
    }
    cout << count << endl;
    
    return 0;
}
