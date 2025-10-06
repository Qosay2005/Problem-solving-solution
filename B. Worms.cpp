#include <bits/stdc++.h>
using namespace std;

#define Qosay ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
bool vaild(pair<ll,ll>&p,int x){
return !(x>p.second);
}
int bs(vector<pair<ll,ll>>&p,int x){
    int l=0,r = (int)p.size()-1;
    if(vaild(p[0],x)) // 0(1)
        return 0;
    while(l+1 < r){
            int mid = (l+r)/2;
        if(vaild(p[mid],x))
            r = mid;
            else
                l = mid;
    }
    return r;
}
void solve(){
    /*
    n =  5
    arr = [2,7,3,4,9]
    */
int n; cin>>n;
vector<ll>arr(n);
for(int i=0;i<n;i++)cin>>arr[i]; // o(n)
int q;cin>>q;
vector<pair<ll,ll>>p;
p.push_back({1,arr[0]});// 1 -> 2
for(int i=1;i<n;i++){ // o(n)
    p.push_back({p[i-1].second+1,p[i-1].second+arr[i]});
}
while(q--){ // q = n
    int m; cin>>m;
    cout << bs(p,m)+1 << "\n"; // log(n)
}
//total time = nlog(n)
}
int main() {
Qosay
solve();

}
