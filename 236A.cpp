#include <bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   cin >> s;

   set<char, greater<char> > s1;

   for (int i = 0; i < s.length(); i++) s1.insert(s[i]);

   cout << (s1.size()%2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");
   
   

    return 0;
}