#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n, anton = 0, danik = 0;
    string s;
    cin >> n;
    cin >> s;
 
    for (char c: s) {
        if(c == 'A') anton++;
        else danik++;
    }
    cout << (anton > danik ? "Anton" : anton == danik ? "Friendship" : "Danik") << endl;
    return 0;
}