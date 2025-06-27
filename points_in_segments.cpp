#include <bits/stdc++.h>
using namespace std;
int main()
{
   int Case = 1;
   int t;
   cin >> t;
   while (t--)
   {
      int n, q;
      cin >> n >> q;
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
         cin >> v[i];
      }
      sort(v.begin(), v.end());
      cout << "Case " << Case++ << ":\n";
      while (q--)
      {
         int l, r;
         cin >> l >> r;
         auto it = lower_bound(v.begin(), v.end(), l);

         int left = (it - v.begin());

         auto it1 = upper_bound(v.begin(), v.end(), r);

         int right = (it1 - v.begin());

         int ans = (right - left);

         cout << ans << "\n";
      }
   }
}
