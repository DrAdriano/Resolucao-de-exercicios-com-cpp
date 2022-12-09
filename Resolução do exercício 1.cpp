#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;

//Fornecer a quantidade de linhas e colunas e construir uma mariz formada apenas por asteriscos.

int main (){
setlocale (LC_ALL, "Portuguese");
    int L,C,i,j;

    cout << "Forneça a quantidade de linhas:";
    cin >> L;
    cout << "Forneça a quantidade de colunas:";
    cin >> C;

    char M[L][C];

    for (i=0;i<L;i++)
        for (j=0;j<C;j++)
        M[i][j]='*';

    for (i=0;i<L;i++)
        {for (j=0;j<C;j++)
            cout<<M[i][j];
            cout << "\n";}

return 0;
}
