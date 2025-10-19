#include <bits/stdc++.h>
using namespace std;
#define Qosay ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define test int t; cin >> t; while(t--)
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<ll> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];

    ll mx1 = LLONG_MIN, mx2 = LLONG_MIN;
    int count1 = 0;

    // إيجاد أكبر رقم وعدد مرات ظهوره
    for (ll x : s) {
        if (x > mx1) {
            mx2 = mx1;
            mx1 = x;
            count1 = 1;
        } else if (x == mx1) {
            count1++;
        } else if (x > mx2) {
            mx2 = x;
        }
    }

    for (int i = 0; i < n; i++) {
        if (s[i] < mx1)
            cout << s[i] - mx1 << " ";
        else {
            if (count1 > 1) 
            cout << s[i] - mx1 << " ";
            else 
                cout << s[i] - mx2 << " ";
        }
    }
    cout << "\n";
}

int main() {
    Qosay
    test
     solve();
}

