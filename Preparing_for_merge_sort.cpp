
// test case 15 tle
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++) cin >> v[i];

//     set<int> st(v.begin(), v.end()); 

//     while (!st.empty())
//     {
//         vector<int> v1;
//         int last = -1;
//         for (int i = 0; i < v.size(); i++)
//         {
//             if (st.count(v[i]) && v[i] > last)
//             {
//                 v1.push_back(v[i]);
//                 last = v[i];
//                 st.erase(v[i]);
//             }
//         }

//         for (int x : v1) cout << x << " ";
//         cout << "\n";
//     }

//     return 0;
// }




// test case 27 tle
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++) cin >> v[i];

//     vector<bool> used(n, false);  

//     int remaining = n;

//     while (remaining > 0)
//     {
//         vector<int> seq;
//         int last = -1;

//         for (int i = 0; i < n; i++)
//         {
//             if (!used[i] && v[i] > last)
//             {
//                 seq.push_back(v[i]);
//                 used[i] = true;
//                 last = v[i];
//                 remaining--;
//             }
//         }

//         for (int x : seq) cout << x << " ";
//         cout << "\n";
//     }

//     return 0;
// }

// time limit 18

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++) cin >> v[i];

//     unordered_map<int, bool> used;  

//     int remaining = n;

//     while (remaining > 0)
//     {
//         vector<int> seq;
//         int last = -1;

//         for (int i = 0; i < n; i++)
//         {
//             if (!used[i] && v[i] > last)
//             {
//                 seq.push_back(v[i]);
//                 used[i] = true;
//                 last = v[i];
//                 remaining--;
//             }
//         }

//         for (int x : seq) cout << x << " ";
//         cout << "\n";
//     }

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

const int MAXN = 301000;

int n, x, now = 1;
vector<int> sequences[MAXN];
set<pair<int,int>> s;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> x;

    s.insert({x, 0});
    sequences[0].push_back(x);

    for (int i = 1; i < n; i++) {
        cin >> x;
        auto it = s.lower_bound({x, -MAXN});
        if (it == s.begin()) {
            sequences[now].push_back(x);
            s.insert({x, -now});
            now++;
            continue;
        }
        it--;
        int id = it->second;
        sequences[-id].push_back(x);
        s.erase(it);
        s.insert({x, id});
    }

    for (int i = 0; i < now; i++) {
        for (auto u : sequences[i]) cout << u << " ";
        cout << "\n";
    }

    return 0;
}
