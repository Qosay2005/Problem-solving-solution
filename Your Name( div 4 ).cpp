#include <bits/stdc++.h>
using namespace std;
#define Qosay ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define test int t; cin >> t; while(t--)
#define ll long long
 
void solve() {
    int n; cin>>n;
string s,t;
cin>>s>>t;
map<char,int>mps;
map<char,int>mpt;
for(char x:s)
    mps[x]++;
for(char y:t)
    mpt[y]++;
    if(mps == mpt)
        cout << "YES" << "\n";
    else cout << "NO" << "\n";
}
 
int main() {
    Qosay
    test
    solve();
}