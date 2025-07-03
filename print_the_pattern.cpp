#include<bits/stdc++.h>
using namespace std;
string s[16];
string pattern(int n){
    if(!s[n].empty()){
        return s[n];
    }
    if(n == 1){
        s[1] = "A";
        return s[1];
    }
    char NewChar = 'A' + (n - 1);
    s[n] = pattern(n - 1) + NewChar + pattern(n - 1);
    return s[n];
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    cout << pattern(n);
}