#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n, a, b, cont = 0, maximum = 0;
 
    cin >> n;
 
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        cont -= a;
        cont += b;
        maximum = max(cont, maximum);
    }
 
    cout << maximum << endl;
    
    return 0;
}