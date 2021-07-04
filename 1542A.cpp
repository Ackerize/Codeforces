#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, odd, even, item;

    vector<string> answer;

    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        odd = 0, even = 0;
        cin >> m;
        for (int j = 0; j < 2*m; j++)
        {
            cin >> item;

            if(item%2 == 0) even++;
            else odd++;
        }
        if(odd == even) answer.push_back("Yes");
        else answer.push_back("No");
    }

    for (int i = 0; i < answer.size(); i++)  cout << answer[i] << endl;
    
    return 0;
}