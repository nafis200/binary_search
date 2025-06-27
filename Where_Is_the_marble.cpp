#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, q, caseNo = 1;
    while (cin >> t >> q && t != 0 && q != 0) {
        vector<int> v(t);
        for (int i = 0; i < t; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        cout << "CASE# " << caseNo++ << ":\n";

        while (q--) {
            int x;
            cin >> x;
            auto it = lower_bound(v.begin(), v.end(), x);
            if (it != v.end() && *it == x) {
                cout << x << " found at " << (it - v.begin() + 1) << '\n'; 
            } else {
                cout << x << " not found\n";
            }
        }
    }
    return 0;
}


// lower_bound(arr.begin(), arr.end(), 5)
// এটা খোঁজে "প্রথম পজিশন যেখানে মান ≥ 5"

// মানে 5 or তার চেয়ে বড় যা-ই হোক, তার প্রথম occurrence

// এখানে 5 আছে index 5-এ, তাই রিটার্ন করবে index 5


// upper_bound(arr.begin(), arr.end(), 5)
// এটা খোঁজে "প্রথম পজিশন যেখানে মান > 5"

// মানে 5 কে skip করে, তার পরের বড় মান কোথায় সেটা খোঁজে

// 5 এর পরের বড় মান হচ্ছে 6, যা আছে index 6-এ

// scss
// Copy
// Edit
// upper_bound(5) ⇒ index 6 (value = 6)
