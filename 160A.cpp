#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, actual_coin;
 
    cin >> n;
 
    vector<int> coins;
 
    for (int i = 0; i < n; ++i){
        cin >> actual_coin;
        coins.push_back(actual_coin);
    }
    sort(coins.begin(), coins.end());
    reverse(coins.begin(), coins.end());
 
    int pivot = 0;
 
    for (int i = 0; i < coins.size(); ++i){
        pivot += coins.at(i);
        if(pivot > accumulate(coins.begin() + (i + 1), coins.end(), 0)) {
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}