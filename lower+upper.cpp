#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v({1,2,4,4,5,5,6});
    int x = 4;

    if(binary_search(v.begin(),v.end(),x)){
        cout << "YES\n";
    }
    auto it = lower_bound(v.begin(),v.end(),x);
    cout << (it - v.begin()) << "\n";
}