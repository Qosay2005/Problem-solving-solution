#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Qosay ios::sync_with_stdio(false); cin.tie(nullptr);
#define test int t; cin >> t; while (t--)

void solve(){
ll n,q; cin>>n>>q ;
vector<ll>arr(n);
for(auto &i:arr)cin>>i;
vector<ll>px(n,0);
px[0] = arr[0];
for(int i = 1;i<n;i++)
    px[i] = px[i-1] ^ arr[i];
while(q--){
    ll l ,r; cin>>l>>r;
    l--; r--;
    if(l==0)
        cout << px[r] << "\n";
    else

    cout << (px[r] ^ px[l-1]) << "\n";
}


}

int main() {
Qosay
//test
solve();



}
