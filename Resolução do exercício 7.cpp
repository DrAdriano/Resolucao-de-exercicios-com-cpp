#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;

//Apresentar todos elementos do conjunto A que n�o existem no conjunto B.

int main (){
setlocale (LC_ALL, "Portuguese");
    int A[10],B[10],i,j,k,cont=0,n=0;
    float C[10];

    for (i=0;i<10;i++)
    {
        cout << "Forne�a os valores do vetor A["<<i<<"]:";
        cin >> A[i];
        C[i]=A[i];
    }


     for (i=0;i<10;i++)
    {   cout << "Forne�a os valores do vetor B["<<i<<"]:";
        cin >> B[i];
        for (j=0;j<10;j++)
        {   if (A[j]==B[i]) //Verificando se h� elementos iguais entre A e B.
            {   C[j]=0.5; //Coloco um valor n�o inteiro, para facilitar uma identifica��o.
            }
        }
    }

    j=0;

    if (C[0]==0.5 && C[1]==0.5 && C[2]==0.5 && C[3]==0.5 && C[4]==0.5 && C[5]==0.5 && C[6]==0.5 && C[7]==0.5 && C[8]==0.5 && C[9]==0.5)
        cout <<endl<< "A quantidade de elementos do conjunto A que n�o existem no conjunto B � 0.";
    else
    {   cout <<endl<< "Os elementos do conjunto A que n�o existem no conjunto B s�o:" <<endl;
        for (i=0;i<10;i++)
        {   if (C[i]!= 0.5)
            {   cout <<"C["<<j<<"]:"<< C[i]<<endl;
                j=j+1;
            }
        }
    }


  return 0;
}

