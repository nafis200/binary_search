// #include <bits/stdc++.h>
// using namespace std;

// bool Check(int l, int k)
// {
//     if (l < 10)
//     {
//         if (l == k)
//         {
          
//             return true;
//         }
//         else
//         {   
//             return false;
//         }
//     }
//     int ans = 1;
//     while (l)
//     {
//         int last = l % 10;
//         if (last != 0)
//         {

//             ans = ans * last;
//         }
//         l = l / 10;
//     }
//     return Check(ans, k);
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int l, r, k;
//         cin >> l >> r >> k;
//         int count = 0;
//         for (int i = l; i <= r; i++)
//         {
//             if (Check(i, k))
//             {
//                 count++;
//             }
//         }
//         cout << count << "\n";
//     }
// }