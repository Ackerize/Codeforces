#include <bits/stdc++.h>
using namespace std;

int main()
{
    int matriz[5][5];

    int iAux, jAux;

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++) {
            cin >> matriz[i][j];
            if(matriz[i][j] == 1) {
                iAux = i;
                jAux = j;
            }
        }

    int moves = 0;
    if(iAux > 2) moves += (iAux-2);
    else if(iAux < 2) moves += (2-iAux);

    if(jAux > 2) moves += (jAux-2);
    else if(jAux < 2) moves += (2-jAux);

    cout << moves << endl;

    return 0;
}