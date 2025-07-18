#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int a[N];
void merge_sort(int l, int r){
if(l == r){
    return;
}
   int mid = (l + r) / 2;
   merge_sort(l, mid);
   merge_sort(mid + 1, r);  
   vector<int>L,R;

   for(int i =l; i <= mid; i++){
     L.push_back(a[i]);
   }
   for(int i = mid + 1; i <= r; i++){
     R.push_back(a[i]);
   }

   int Lid = 0, Rid = 0, i = l;
   while(Lid < L.size() or Rid < R.size()){
     if(Lid == L.size()){
          a[i] = R[Rid];
         Rid++;
     }
    else if(Rid == R.size()){
         a[i] = L[Lid];
         Lid++; 
     }
     else if(L[Lid] < R[Rid]){
        a[i] = L[Lid];
         Lid++; 
     }
     else{
         a[i] = R[Rid];
         Rid++;
     }
     i++;
   }

}
int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    merge_sort(1, n);

    for(int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }
}

// L.size() always unsigend integer return kore
// When we used L.size() use (int) sign