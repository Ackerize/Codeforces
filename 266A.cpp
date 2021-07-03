#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cont = 0;
    string color;

    cin >> n;
    cin >> color;

    for (int i = 0; i < n-1; i++) if(color[i] == color[i+1]) cont++;

    cout << cont << endl;

    
    return 0;
}