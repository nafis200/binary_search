
// error test Case 6

// Beacuse of

// s = afbdc

// smallest is      t =  afbdd  Correct answer

//  but my logic give afbdf so give wrong answer

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, k; cin >> n >> k;
//     string s; cin >> s;
//     string t;
//     t = s;
//     sort(t.begin(),t.end());
//     if( n < k){
//         cout << s;
      
//         for(int i = (int)s.size(); i < k; i++){
//             cout << t[0];
//         }
    
//     }
//     else{
//         int index = (int)t.size() - 1;
//         string mx = string(1,t[index]);
//         string ans = s.substr(0, k);
//         int indicate = 0;
//         for(int i = (int)ans.size() - 1; i >= 0; i--){
//             if(ans[i] < mx[0]){
//                 ans[i] = mx[0];
//                 indicate = i;
//                 break;
//             }
//         }
     
//         for(int i = indicate + 1; i < k; i++){
//             ans[i] = t[0];
//         }

//         cout << ans << "\n";
       
//     }

// }

// using binary search
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
 
    set<char> st(s.begin(), s.end());
    vector<char> letters(st.begin(), st.end());
 
    if (k > n) {
        cout << s;
        for (int i = 0; i < k - n; i++) {
            cout << letters[0];
        }
        cout << '\n';
    } else {
        string t = s.substr(0, k);
        int pos = k - 1;
        while (pos >= 0) {
            auto it = upper_bound(letters.begin(), letters.end(), t[pos]);
            if (it != letters.end()) {
                t[pos] = *it;
                for (int i = pos + 1; i < k; i++) {
                    t[i] = letters[0];
                }
                cout << t << '\n';
                return 0;
            }
            pos--;
        }
    }
 
    return 0;
}