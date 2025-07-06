#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    set<int> st(v.begin(), v.end()); 

    while (!st.empty())
    {
        vector<int> v1;
        int last = -1;
        for (int i = 0; i < v.size(); i++)
        {
            if (st.count(v[i]) && v[i] > last)
            {
                v1.push_back(v[i]);
                last = v[i];
                st.erase(v[i]);
            }
        }

        for (int x : v1) cout << x << " ";
        cout << "\n";
    }

    return 0;
}
