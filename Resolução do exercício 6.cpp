#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;

//Imprimir os elementos comuns entre dois vetores, A e B.

int main (){
setlocale (LC_ALL, "Portuguese");
    int A[4],B[5],i,j;

    for (i=0;i<4;i++)
    {
        cout << "Forneça os valores do vetor A["<<i<<"]:";
        cin >> A[i];
    }
     for (i=0;i<5;i++)
    {
        cout << "Forneça os valores do vetor B["<<i<<"]:";
        cin >> B[i];
    }

cout << "Caso haja elementos em comum entre ambos os vetores, o programa os apresentará a seguir." <<endl;
    for (i=0;i<4;i++)
        for (j=0;j<5;j++)
        {
            if (A[i]==B[j])
            cout << "Temos que o vetor A["<<i<<"] é igual ao vetor B["<<j<<"], pois possuem o elemento "<< A[i]<< " em comum." <<endl;
        }

  return 0;
}
