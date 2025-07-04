#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, t; cin >> s >> t;
    int a = s.size();
    int b = t.size();
    int mn = min(a, b);
    for(int i = 0; i < mn; i++) {
        if(s[i] < t[i]) {
            cout << "Yes\n";
            return 0;
        }
        else if(s[i] > t[i]) {
            cout << "No\n";
            return 0;
        }
    }
    if(a < b) cout << "Yes\n";
    else cout << "No\n";
}
