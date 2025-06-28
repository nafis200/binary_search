#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool Check(vector<ll>&v, ll k, ll chocolate){
    int count = 0;

    for(int i = 0; i < v.size(); i++){
        if(v[i] >= chocolate){
            count += (v[i] / chocolate);
        }
    }
    if(count >= k){
        return true;
    }
    else{
        return false;
    }
    
}

int main(){
    int t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        vector<ll>v;
        for(int i = 0; i < n; i++){
            ll x; cin >> x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        ll l = 1, r = 1e9;
        ll ans = 0;
        while(l <= r){
            ll mid = (l + r) / 2;
            if(Check(v, k, mid)){
                l = mid + 1;
                ans = mid;
            }
            else{
                r = mid - 1;
            }
           
        }


        cout << ans << "\n";


    }
}