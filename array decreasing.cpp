#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Qosay ios::sync_with_stdio(false); cin.tie(nullptr);
#define test int t; cin >> t; while (t--)


bool cm(pair<ll,ll>&a,pair<ll,ll>&b){
if(a.first != b.first)
    return a.first<b.first;
else
    return a.second<b.second;
}

bool cmp(ll a ,ll b){
return a<b;
}

void solve(){
ll n;
cin>>n;
vector<ll>arr(n);
for(auto &x:arr)cin>>x;
ll ans=0;
for(int i=1;i<n;i++){
   if(arr[i]>=arr[i-1])
       continue;
   else{
    ans += (abs(arr[i]-arr[i-1]));
    arr[i] = arr[i-1];
   }

}
cout << ans ;

}
int main() {
Qosay
//test
solve();



}
