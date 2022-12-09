#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;

//Verificar a paridade dos valores de um vetor.


int main (){
setlocale (LC_ALL, "Portuguese");
    int n,i;

    cout<< "Digite o valor para o tamanho do vetor:";
    cin>>n;

    int v[n];

    for (i=0;i<n;i++)
    {   cout << "Forneça os valores do vetor v["<<i<<"]:";
        cin >> v[i];
    }

  return v[n];
}

void bloco (int v[n]){
    int n,m=0,i,j;
    int v[n];

    for (i=0;i<n;i++)
    {   if (bloco(v[i])%2==0)
        {   for (j=0;j<n;j++)
            {   if (v[j]%2!=0)
                    m=-1;
            }
        }
    }
    if (m==-1)
        cout << "-1";

    if (m!=-1)
    {   if (v[0]%2==0)
        cout << "0";
        else
        cout << "1";
    }

}


