
// binary search problem

// https://codeforces.com/edu/course/2

//  non-decreasing order sorted thakbe

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
int a[N];

bool search(int l, int r, int x){
    if(l > r)
    return false;
    int mid = (l + r) / 2;
    if(a[mid] == x){
        return true;
    }
    else if(a[mid] > x){
        return search(l, mid - 1, x);
    }
    else{
        return search(mid + 1, r, x);
    }
}

int main(){
   int n; cin >> n;
   for(int i = 1; i <= n; i++){
     cin >> a[i];
   }
   sort(a + 1, a + n + 1);
   
   int x; cin >> x;

   bool ans = search(1, n, x);
   cout << ans << "\n";

}