#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, a, b, aux, one, two;

    cin >> t;

    bool find = false;

    vector<string> answer;

    for (int i = 0; i < t; i++)
    {
        cin >> n >> a >> b;
        aux = 1;
        for (int j = 0; j < n; j++)
        {
            one = a * aux;
            two = b + aux;
            if(one == n || two == n) {
                find = true;
                break;
            }
            if(one == aux) one = two;
            aux = min(one, two);
            
            if(aux > n) {
                cout << aux%a << endl;
                break;
            }
        }
        if(find) answer.push_back("Yes");
        else answer.push_back("No");
        find = false;
    }

    for(string a : answer) cout << a << endl;
    
    
    return 0;
}