#include <bits/stdc++.h>
using namespace std;
#define Qosay ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define test int t; cin >> t; while(t--)
#define ll long long

void solve() {
   ll a,b,c,x,y;
   cin>>a>>b>>c>>x>>y;
     ll math = max(0ll,x-a);
     ll lit = max(0ll,y-b);
     ll res= math+lit;
    if(res<=c)cout << "Yes" << endl;
    else cout << "No" << endl;




}

int main() {
    Qosay
    test
     solve();
}

