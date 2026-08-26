#include <bits/stdc++.h>
using namespace std;
#define Qosay ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define test int t; cin >> t; while(t--)
#define ll long long
bool check(vector<ll>&kt,ll mid , ll numPro){

ll ans = 0;
for(auto x:kt)
{
    ans += (mid/x);
    if(ans >= numPro)
        break;
}

return ans >=numPro;
}
ll bs(vector<ll>&k,ll numProducts){
ll l=0 , r = 1e18;
while(l+1<r){
    ll mid = (l+r)/2;
    if(check(k,mid,numProducts))
        r=mid;
        else
            l=mid;
}
return r;

}
void solve(){
ll n,t; cin>>n>>t;
vector<ll>arr(n);
for(auto &x:arr)cin>>x;
cout << bs(arr,t);
}
int main(){
Qosay
//test
solve();

}
