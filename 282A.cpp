#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, cont = 0;
    string line;
 
    cin >> n;
 
    for (int i = 0; i < n; ++i) {
        cin >> line;
        size_t found = line.find('+');
 
        if (found != string::npos) cont++;
        else cont--;
    }
 
    cout << cont << endl;
    return 0;
}