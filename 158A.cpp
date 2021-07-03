#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, ith;
    cin >> n >> k;

    int cont = 0;

    vector<int> v;

    for (int i = 0; i < n; ++i)
    {
        cin >> ith;
        v.push_back(ith);
    }

    int pivot = v.at(k - 1);
    for (int i : v)
        if (i > 0 && i >= pivot)
            cont++;

    cout << cont << endl;

    return 0;
}