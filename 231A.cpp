#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, m, l;
    cin >> n;

    int cont = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> m >> k >> l;
        cont = (m + k + l > 1) ? (cont + 1) : cont;
    }

    cout << cont << endl;

    return 0;
}