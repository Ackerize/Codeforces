#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> v;
    string s, aux;
    int size;
    for (int i = 0; i < n; ++i)
    {
        cin >> s;
        size = s.length();
        if (size > 10)
        {
            aux = s[0] + to_string(size - 2) + s[size - 1];
            v.push_back(aux);
        }
        else
        {
            v.push_back(s);
        }
    }

    for (auto &i : v)
        cout << i << endl;

    return 0;
}