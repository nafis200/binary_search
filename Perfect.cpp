#include<bits/stdc++.h>
using namespace std;

bool is_sum_10(long long ans){
    int num = 0;
    while(ans){
        num = num + (ans % 10);
        ans = ans / 10;
    }
    if(num == 10){
        return true;
    }
    return false;
}

int main(){
    int k; cin >> k;
    long long ans = 0;
    int count = 1;
    while(k){
        ans = 1LL * (19 + (count - 1) * 9);
        bool ok = is_sum_10(ans);
        if(ok){
            k--;
        }
        count++;
    }
    cout << ans << "\n";
}

// 19 28 37 46 55 64 73 82 91 100 109
// 100 is remove