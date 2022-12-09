#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;

int main (){
setlocale (LC_ALL, "Portuguese");
    int Matriz[5][5],i,j,k=0,M,m;

    for (i=0;i<5;i++) //Montando a matriz.
    {   for (j=0;j<5;j++)
        {   cout<< "Digite o valor para a linha " << i+1 << ", coluna "<<j+1 <<":";
            cin>>Matriz[i][j];
        }

    }

    cout << "\n";
    cout << "Assim, formamos a matriz:"<<endl;

    for (i=0;i<5;i++) //Mostrando a matriz.
    {   for (j=0;j<5;j++)
            cout<< " " <<Matriz[i][j]<<" ";
            cout << "\n";
    }

    M=Matriz[0][0];
    cout <<endl<< M;

    for (i=0;i<5;i++) //Encontrando o maior valor da matriz.
    {   for (j=0;j<5;j++)
        {   if (M<Matriz[i][j])
                M=Matriz[i][j];
                i=k;
        }
    }

    cout << "\n";
    cout<< "O maior elemento da matriz tem o valor de " <<M<<endl;
    cout << "\n";

    m=Matriz[k][0];

    for (j=0;j<5;j++)//Encontando o menor valor da linha.
    {   if (m>Matriz[k][j])
        m=Matriz[k][j];
    }

cout<< "Assim, o elemento minimax, tem o valor de " <<m;




return 0;
}
