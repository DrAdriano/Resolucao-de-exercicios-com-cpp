#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;

//Multiplicação de matrizes.

int main (){
setlocale (LC_ALL, "Portuguese");
    int L,C,l,c,i,j,k,n=0,m=0;

    cout << "Forneça a quantidade de linhas para a primeira matriz:";
    cin >> L;
    cout << "Forneça a quantidade de colunas para a primeira matriz:";
    cin >> C;
    cout << "\n";

    int A[L][C];

    cout << "Forneça a quantidade de linhas para a segunda matriz:";
    cin >> l;
    cout << "Forneça a quantidade de colunas para a segunda matriz:";
    cin >> c;
    cout << "\n";

    int B[l][c];
    int D[l][C];
    int E[L][c];

    for (i=0;i<l;i++)
        for (j=0;j<C;j++)
            {D[i][j]=0;
            }

    for (i=0;i<L;i++)
        for (j=0;j<c;j++)
            {E[i][j]=0;
            }


    if (L==c || l==C)
    {   cout << "Forneça os valores da primeira matriz: " << endl;

        for (i=0;i<L;i++)
            for (j=0;j<C;j++)
            {   cout<< "Digite o valor para a linha " << i+1 << ", coluna "<<j+1 <<":";
                cin>>A[i][j];
            }
        cout << "\n";

        cout << "Forneça os valores da segunda matriz: " << endl;

        for (i=0;i<l;i++)
            for (j=0;j<c;j++)
            {   cout<< "Digite o valor para a linha " << i+1 << ", coluna "<<j+1 <<":";
                cin>>B[i][j];
            }
        cout << "\n";

        if (C==l)
            {   cout << endl << "A múltiplicação da primeira pela segunda resulta em:"<< endl;

                for (i=0;i<L;i++)
                {   for (j=0;j<c;j++)
                    {   for (k=0;k<C;k++)
                           E[i][j]=E[i][j]+A[m][k]*B[k][n];

                        n=n+1;
                    }
                    m=m+1;
                    n=0;
                }
                for (i=0;i<L;i++) //Mostrando a matriz.
                {   for (j=0;j<c;j++)
                    cout<< " " <<E[i][j]<<" ";
                    cout << "\n";
                }
                cout << "\n";
            }

        if (c==L)
            {   cout << endl << "A múltiplicação da segunda pela primeira resulta em:"<< endl;

                m=0;
                n=0;

                for (i=0;i<l;i++)
                {   for (j=0;j<C;j++)
                    {   for (k=0;k<c;k++)
                           D[i][j]=D[i][j]+B[m][k]*A[k][n];

                        n=n+1;
                    }
                    m=m+1;
                    n=0;
                }
                for (i=0;i<l;i++) //Mostrando a matriz.
                {   for (j=0;j<C;j++)
                    cout<< " " <<D[i][j]<<" ";
                    cout << "\n";
                }
                cout << "\n";
            }
    }
    else
    cout << "A múltiplicação entre essas matrizes não é possível.";


return 0;
}
