#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, h, l, width = 0;
 
    cin >> n >> h;
 
 
    for (int i = 0; i < n; ++i){
        cin >> l;
        width = (l > h ? width + 2 : width + 1);
    }
 
    cout << width << endl;
 
    return 0;
}