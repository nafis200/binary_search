
// wrong
// #include<bits/stdc++.h>
// using namespace std;

// bool cmp(const pair<int,int> &a, const pair<int,int> &b){
//     if(a.first != b.first) return a.first < b.first;
//     return a.second > b.second;
// }
// int main(){
//     int t; cin >> t;
//     while(t--){
//         int n; cin >> n;
//         vector<pair<int,int>>v;
//         for(int i = 1; i <= n; i++){
//              int x, idx;
//              cin >> x >> idx;
//              v.push_back({x,idx});
//         }

//         sort(v.begin(),v.end(),cmp);

//         for(int i = 0; i < n; i++){
//             cout << v[i].first << " " << v[i].second << "\n";
//         }
//     }
// }



// accepted

#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
    if (a.first != b.first) return a.first < b.first;
    return a.second > b.second;
}

int main() {
    int t;
    scanf("%d", &t); 
    while (t--) {
        int n;
        scanf("%d", &n);
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++) {
            scanf("%d %d", &v[i].first, &v[i].second);
        }

        sort(v.begin(), v.end(), cmp);

        for (int i = 0; i < n; i++) {
            printf("%d %d\n", v[i].first, v[i].second); 
        }
    }
    return 0;
}
