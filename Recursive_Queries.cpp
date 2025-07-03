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


#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
int g[N]; 
int cnt[10][N];

int Check(int l)
{
    if (l < 10)
    {
        return l;
    }
    int ans = 1;
    while (l)
    {
        int last = l % 10;
        if (last != 0)
        {

            ans = ans * last;
        }
        l = l / 10;
    }
    return Check(ans);
}

int main()
{
    
    for(int i = 1; i < N; i++){
        g[i] = Check(i);
    }

    for(int i = 1; i < N; i++){
        for(int k = 1; k <= 9; k++){
            cnt[k][i] = cnt[k][i - 1] + (g[i] == k); 
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int l, r, k;
        cin >> l >> r >> k;

        cout << cnt[k][r]- cnt[k][l - 1] << "\n";
        
    }
}