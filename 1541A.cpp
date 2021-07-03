#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;

    cin >> n;

    vector<vector<int>> v;

    for (int i = 0; i < n; ++i) {
        cin >> m;
        vector<int> a;
        for (int i = 1; i <= m; i++) a.push_back(i);
        for (int i = 0; i < (m-1); i++) swap(a.at(i), a.at(i+1));
        v.push_back(a);
    }

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.at(i).size(); j++) cout << v[i][j] << " ";
        cout << endl;
    }
    
    return 0;
}