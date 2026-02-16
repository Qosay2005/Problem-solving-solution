#include<bits/stdc++.h>
using namespace std;
#define Qosay ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define test int t; cin >> t; while(t--)
#define ll long long

void solve(){
string s; cin>>s;
ll c=0;
map<char,ll>mp;
for(auto x:s)
    mp[x]++;
   for(auto x:mp)
    if(x.second%2==1)
       c++;
     if(c > 1){
            cout << "NO SOLUTION";
            return ;
     }

    string left="",middle="";
    for(auto x:mp)
    {
    char temp = x.first;
    ll cnt = x.second;
    if(cnt%2==1)
        middle += temp;
    left += string(cnt/2,temp);

    }
    string right = left;
    reverse(right.begin(),right.end());
    cout << left+middle+right;

}

int main() {
Qosay
//test
solve();

}









