#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
 
    reverse(s2.begin(), s2.end());
 
    cout << (s2 == s1 ? "YES" : "NO") << endl;
    return 0;
}