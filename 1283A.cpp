#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t, h, m;
    cin >>  t;
    
    vector<int> answer;
 
    for (int i = 0; i < t; ++i) {
        cin >> h >> m;
        answer.push_back(((23-h)*60)+(60-m));
    }
 
    for(int a: answer)
        cout << a << endl;
 
    return 0;
}