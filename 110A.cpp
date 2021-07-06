#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    int cont = 0;
    cin >> s;
    for (char i : s) {
        if(i == '7' || i == '4') cont++; 
    }
    cout << ((cont == 7 || cont == 4) ? "YES" : "NO") << endl;
    return 0;
}