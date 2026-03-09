#include <bits/stdc++.h>
using namespace std;
#define Qosay ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define test int t; cin >> t; while(t--)
#define ll long long
void solve(){
    ll n,q; cin>>n>>q;//7
    map<string,ll>mp;
    for(int i=0;i<n;i++){//7
    string s ;ll amount;
    cin>>s>>amount;
    mp.insert({s,amount});
    }
    while(q--){
    ll type ; cin>>type;

    if(type == 1){
        string x ;ll y;
        cin>>x>>y;
        mp[x] += y;
    }
    else{
        string z ; cin>>z;
        cout << mp[z] << "\n";
    }

    }
}
int main(){
Qosay
//test
solve();

}
