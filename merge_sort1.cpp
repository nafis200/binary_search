#include <bits/stdc++.h>
using namespace std;
vector<int> v;
void merge_sort(int l, int r){
    if(l == r){
        return;
    }
  int mid = (l + r) / 2;
  merge_sort(l, mid);
  merge_sort(mid + 1, r);
  vector<int>left,right;
  for(int i = l; i <= mid; i++){
      left.push_back(v[i]);
  }
  for(int i = mid + 1; i <= r; i++){
    right.push_back(v[i]);
  }
  int Lid = 0, Rid = 0, i = l;
  
  while(Lid < left.size() || Rid < right.size()){
     if(Lid == left.size()){
        v[i] = right[Rid];
        i++;
        Rid++;
     }
     else if(Rid == right.size()){
        v[i] = left[Lid];
        i++;
        Lid++;
     }
     else if(left[Lid] <= right[Rid]){
         v[i] = left[Lid];
         Lid++;
         i++;
     }
     else{
        v[i] = right[Rid];
        i++;
        Rid++;
     }
  }
}
int main()
{
    // input read file
    int x;
    while (cin >> x)
    {
        v.push_back(x);
    }
    merge_sort(0, v.size() - 1);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    v.clear();
}