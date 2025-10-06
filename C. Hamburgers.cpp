#include <bits/stdc++.h>
using namespace std;

#define Qosay ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
ll nb,ns,nc,pb,ps,pc,r,B,S,C;
bool vaild(ll mxB){
    ll B1=B,S1=S,C1=C;
B1 *= mxB;
S1 *= mxB;
C1 *= mxB;
B1 -= nb;
if(B1<0)B1=0;
S1 -= ns;
if(S1<0)S1=0;
C1 -= nc;
if(C1<0)C1=0;
ll totalP = (B1*pb)+(S1*ps)+(C1*pc);
return totalP<=r;

}
ll bs(){
    ll l=0,r = 1e15;
    if(!vaild(0))return 0;
   while(l+1<r){
    ll mid =(l+r)/2;
    if(vaild(mid))
        l=mid;
        else r=mid;

   }
   return l;
}
void solve(){

    string s; cin>>s;
    cin>>nb>>ns>>nc>>pb>>ps>>pc>>r;
    S=0,B=0,C=0;
    for(int i=0;i<s.size();i++){
        if(s[i] == 'B')B++;
        if(s[i] == 'S')S++;
        if(s[i] == 'C')C++;
    }
    cout << bs();

}
int main() {
Qosay
solve();

}
