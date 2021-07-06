#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ll n, k;
 
    cin >> n >> k;
    ll half = n / 2;
    if(n%2 == 0){
        if(k <= (half)){
            cout << 2 * (k - 1) + 1 << endl;
        }else{
            cout << 2 * (k - half) << endl;
        }
    }else{
        if(k <= (half + 1)){
            cout << 2 * (k - 1) + 1 << endl;
        }else{
            cout << 2 * (k - 1 - half) << endl;
        }
    }
 
    return 0;
}