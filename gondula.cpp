#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Qosay ios::sync_with_stdio(false); cin.tie(nullptr);
#define test int t; cin >> t; while (t--)
vector<bool>visit;
//ll n;
void dfs(int node , vector<vector<ll>>&adj){

visit[node] = true ;
cout << node << " ";
for(auto child:adj[node]){
    if(!visit[child])
        dfs(child,adj);
}
}
void bfs(int node , vector<vector<ll>>&adj){
visit [node] = true;
queue<int>q;
q.push(node);
while(!q.empty()){
    int parent = q.front();
q.pop();
cout << parent << " ";
for(auto child:adj[node]){
    if(!visit[child]){
        visit[child]=true;
        q.push(child);
    }


}
}
}

ll fib(ll n){
ll dp[n+1];
dp[0]=0;
dp[1] =1;
for(ll i=2;i<=n;i++)
    dp[i] = dp[i-1] + dp[i-2];

return dp[n];
}
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
ll n,x;
cin>>n>>x;
vector<ll>arr(n);
for(auto &x:arr)cin>>x;
sort(arr.begin(),arr.end());
ll ans=0;
ll l=0,r=n-1;
while(l<=r){

    if(arr[l] + arr[r] <= x)
    {

        ans++;
        l++;
        r--;

    }
    else {
        if(arr[l] >= x){
            ans++;
            l++;
        }
        else {
            ans++;
            r--;
        }

    }

}
cout << ans;


}
int main() {
Qosay
//test
solve();



}
