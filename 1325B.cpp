#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t, n, a;
 
    cin >> t;
    vector<set<long long>> subsequence;
 
    for (long long i = 0; i < t; ++i) {
        cin >> n;
        set<long long> sub;
        for (long long j = 0; j < n; ++j) {
            cin >> a;
            sub.insert(a);
        }
        subsequence.push_back(sub);
    }
 
    for (auto & i : subsequence) cout << i.size() << endl;
    
    return 0;
}