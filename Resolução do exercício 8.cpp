#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;

//Cálculo do determinante.

int main (){
setlocale (LC_ALL, "Portuguese");
    int M[3][3],i,j,Det=0;

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
            cout<< " " <<M[i][j]<<" ";
            cout << "\n";
        }

    Det=((M[0][0]*M[1][1]*M[2][2])+(M[1][0]*M[2][1]*M[0][2])+(M[2][0]*M[0][1]*M[1][2])-(M[0][2]*M[1][1]*M[2][0])-(M[0][1]*M[1][0]*M[2][2])-(M[1][2]*M[2][1]*M[0][0]));
    cout << "O seu determinante será:"<<Det;

  return 0;
}


