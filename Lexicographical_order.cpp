#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s,t,u;
        cin >> s >> t >> u;
        map<char,int>mp;
        for(int i = 0; i < s.size();i++){
            mp[s[i]] = i;
        }

        if(t == u){
            cout << "=\n";
            continue;
        }

        for(int i = 0; i < t.size();i++){
            if(mp[t[i]] == mp[u[i]]){
                continue;
            }
            else if(mp[t[i]] > mp[u[i]]){
                cout << ">\n";
                break;
            }
            else{
                cout << "<\n";
                break;
            }
        }
    }
}