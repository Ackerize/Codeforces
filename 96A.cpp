#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    int cont_zero = 0, cont_one = 0;
    cin >> s;
 
    for(char c : s){
        if(cont_zero == 7 || cont_one == 7) break;
 
        if(c == '0') {
            cont_zero++;
            cont_one = 0;
        }
        else{
            cont_one++;
            cont_zero = 0;
        }
    }
 
    cout << (cont_zero >=6 || cont_one >= 6 ? "YES" : "NO") << endl;
 
    return 0;
}