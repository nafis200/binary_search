#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        long long l = 1, r = 1e18;
        long long ans = 0;
        while(l <= r){
            long long mid = (l + r) / 2;
            long long not_divisible = mid - (mid / n);
            if(not_divisible < k){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        cout << l << "\n";

    }
}