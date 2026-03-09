#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Qosay ios::sync_with_stdio(false); cin.tie(nullptr);
#define test int t; cin >> t; while (t--)
void solve() {
ll n,q ;
cin>>n>>q;
vector<ll>arr(n);
for(auto &x:arr)cin>>x;
vector<ll>p(n,0);
p[0]=arr[0];
for(int i=1;i<n;i++)
    p[i] = p[i-1]+arr[i];
while(q--){
    ll l ,r;
    cin>>l>>r;
    l--; r--;
    if(l==0)
        cout << p[r] << "\n";
    else
    cout << p[r] - p[l-1] << "\n";
}


}

int main() {
    Qosay
    //test
    solve();

}
