// using binary search


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, k;
//     cin >> n >> k;
//     string s;
//     cin >> s;

//     set<char> st(s.begin(), s.end());
//     vector<char> letters(st.begin(), st.end());

//     if (k > n) {
//         cout << s;
//         for (int i = 0; i < k - n; i++) {
//             cout << letters[0];
//         }
//         cout << '\n';
//     } else {
//         string t = s.substr(0, k);
//         int pos = k - 1;
//         while (pos >= 0) {
//             auto it = upper_bound(letters.begin(), letters.end(), t[pos]);
//             if (it != letters.end()) {
//                 t[pos] = *it;
//                 for (int i = pos + 1; i < k; i++) {
//                     t[i] = letters[0];
//                 }
//                 cout << t << '\n';
//                 return 0;
//             }
//             pos--;
//         }
//     }

//     return 0;
// }


