#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll f(ll n) {
    return n*(n+1)/2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        ll k, x;
        cin >> k >> x;
        ll l = 1, r = 2*k - 1;
        while(l < r) {
            ll mid = (l + r) / 2;
            ll rest = (2*k - 1) - mid;

            ll total_emotes = 0;
            if(mid <= k) {
                total_emotes = f(mid);
            } else {
                total_emotes = f(k) + f(k - 1) - f(rest);
            }

            if(total_emotes < x) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        cout << l << "\n";
    }
    return 0;
}

// 