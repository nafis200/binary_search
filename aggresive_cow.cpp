#include<bits/stdc++.h>
using namespace std;
const int N = 100009;
int a[N];

bool Cow(int distance, int x, int n){
    int count = 1;
    int initial_postion = 0;
    for(int i = 1; i < n; i++){
        if(a[i] - a[initial_postion] >= distance){
            initial_postion = i;
            count++;
        }
    }
    if(count >= x){
        return true;
    }
    return false;
}


int main(){
    int t; cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        long long l = 1, r = 1000000005;
        while(l <= r){
            long long mid = 1LL * ((l + r)) / 2;
            bool ok = Cow(mid,x,n);
            if(ok){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        cout << r << "\n";
    }
}