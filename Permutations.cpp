#include<bits/stdc++.h>
using namespace std;
#define Qosay ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define test int t; cin >> t; while(t--)
#define ll long long

void solve(){
ll n;cin>>n;
if(n==3||n==2){
    cout << "NO SOLUTION";
    return ;
}
if(n==1){
    cout << 1;
    return ;
}
if(n==4){
    cout << 2 << " " << 4 << " " << 1 << " " << 3;
    return ;
    
}
vector<ll>arr;
for(ll i=1;i<=n;i++)
    arr.push_back(i);// 1 2 3 4 5

vector<ll>even,odd;
for(int i=0;i<arr.size();i++){
    if(arr[i]%2==0)
        even.push_back(arr[i]);
    else
        odd.push_back(arr[i]); // 1 3 5
}
for(auto x:odd)
cout << x<< " ";
for(auto x:even)
cout << x<< " ";



}

int main() {
Qosay
//test
solve();

}









