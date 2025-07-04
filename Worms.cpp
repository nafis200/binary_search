#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int>v(n + 5, 0);
    for(int i = 1; i <= n; i++){
         cin >> v[i];
         v[i] = v[i - 1] + v[i];
    }

   int q; cin >> q;
   while(q--){
     int x; cin >> x;
    //  auto it = lower_bound(v.begin(),v.end(),x);

    //  cout << (it - v.begin()) << "\n";
    int l = 1, r = n;
    int ans = 0;
    while(l <= r){
        int mid = (l + r) / 2;
        if(v[mid] < x){
            l = mid + 1;
        }
        else{
            ans = mid;
            r = mid - 1;
        }
    }
    cout << ans << "\n";

   }
}