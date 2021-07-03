#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line1, line2;

    cin >> line1;
    cin >> line2;

    transform(line1.begin(), line1.end(), line1.begin(), ::tolower);
    transform(line2.begin(), line2.end(), line2.begin(), ::tolower);

    if(line1 > line2) cout << 1 << endl;
    else if(line1 < line2) cout << -1 << endl;
    else cout << 0 << endl;
    return 0;
}