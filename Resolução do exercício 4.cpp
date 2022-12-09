#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;

// Mostrar a transposta de uma matriz 3x3.

int main (){
setlocale (LC_ALL, "Portuguese");
    int M[3][3],i,j,n;

    for (i=0;i<3;i++)
        for (j=0;j<3;j++)
        {
            cout<< "Digite o valor para a linha " << i+1 << ", coluna "<<j+1 <<":";
            cin>>M[i][j];
        }

    cout << "Assim, formamos a matriz:"<<endl;
    for (i=0;i<3;i++)
        {
            for (j=0;j<3;j++)
            cout<<M[i][j];
            cout << "\n";
        }

    cout << "A sua transposta será:"<<endl;
    for (i=0;i<3;i++)
        {
            for (j=0;j<3;j++)
            cout<<M[j][i];
            cout << "\n";
        }

  return 0;
}

