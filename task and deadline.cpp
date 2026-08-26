#include <bits/stdc++.h>
using namespace std;
#define Qosay ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define test int t; cin >> t; while(t--)
#define ll long long
 bool cms(pair<ll,ll>&a,pair<ll,ll>&b){
if(a.second != b.second)
    return a.second<b.second;
else
return a.first<b.first;
}
void solve(){
    ll n ;cin>>n;
    vector<pair<ll,ll>>arr;
    while(n--){
        ll x,y;
        cin>>x>>y;
        arr.push_back({x,y});
    }
    sort(arr.begin(),arr.end(),cms);
    ll ans = 1; ll d = arr[0].first;
    for(int i=1;i<arr.size();i++){
        if(arr[i].first>d)
            ans++;
    }
    cout << ans;
}
int main() {
    Qosay
    test
    solve();
}