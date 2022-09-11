#include <bits/stdc++.h>
using namespace std;

#define PB push_back

typedef vector<int> vi;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s, s1;
    cin >> s;
    for(int i =0; i<s.size(); i++){
        if(islower(s[0])){
            s[0] = toupper(s[0]);
        }
        
    }
    cout << s << endl;
    
    
    return 0;
}
