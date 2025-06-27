#include <bits/stdc++.h>
using namespace std;

bool Minion(vector<int> &v, int num, int hours)
{
    int need_hours = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] % num == 0)
        {
            need_hours += v[i] / num;
        }
        else
        {
            need_hours += (v[i] / num) + 1;
        }
    }

    if (need_hours > hours)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v;
        int n, H;
        cin >> n >> H;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        int l = 1, r = 1e9;
        int ans = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (Minion(v, mid, H))
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
                ans = mid;
            }
        }
        cout << ans << "\n";
    }
}