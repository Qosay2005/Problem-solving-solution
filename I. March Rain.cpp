#include <bits/stdc++.h>
using namespace std;

#define Qosay ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

ll n, k;
vector<ll> pos;

bool valid(ll len) {
    ll K1 = k, cover = 0;
    for (int i = 0; i < n; i++) { //n
        if (pos[i] > cover) {
            if (K1 < 1)
                return 0;
            K1--;
            cover = pos[i] + len - 1;// len = 5 , pos[i]=10 10->15-1...10,11,12,13,14  
        }
    }
    return 1;
}

void solve() {
    cin >> n >> k;
    pos.resize(n);
    for (int i = 0; i < n; i++) cin >> pos[i];//n
    sort(pos.begin(), pos.end());//nlog(n)

    ll l = 0, r = (int)pos.size()-1;
    while (l + 1 < r) { //log(n)  // total time = nlog(n)
        ll mid = (l + r) / 2;
        if (valid(mid))//n
            r = mid;
        else
            l = mid;
    }
    cout << r << "\n";
}

int main() {
    Qosay
    int t; cin >> t;
    while (t--)
        solve();
}
