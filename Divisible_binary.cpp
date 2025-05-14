//  n diye divisible na k smallest number print koro

// 3 diye divided na

// 1 2 4 5 7 8 10 11 13 14 16

// so 5 No is 7 ans = 7


// check ( n - n / k ) or 

// mid - mid / k

//  mid = 11   (11 - 11 / k) = 11 - 3 = 8

//  11 holo 8 no position e ache ans

//  agian problem 

//  mid = 3 then (3 - 3 / 3) = 2 

//  (2 - 2 / 3) = 2

// but i need 2
// left most lagbe


#include<bits/stdc++.h>
using namespace std;
int search(int l, int r, int k){
    if(l > r) return -1;
    int mid = (l + r) / 2;
    int not_divisible = (mid - mid / k);
    if(not_divisible > k){
        return search(l, mid - 1, k);
    }
    else if(not_divisible < k){
        return search(mid + 1, r , k);
    }
    else{
        if(mid % k != 0) return mid;
        return search(l, mid - 1, k);
    }
}