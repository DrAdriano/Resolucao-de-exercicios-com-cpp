#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;

// Verificar a paridade dos valores de um vetor.


int tam(){
    int n;

    cout<< "Digite o valor para o tamanho do vetor:";
    cin>>n;

return n;
}

int vet(int n){
    int i,v[n];

    for (i=0;i<n;i++)
    {   cout << "Forneça os valores do vetor v["<<i<<"]:";
        cin >> v[i];
    }
 return v[n];
}

int bloco (int n){
    int m=0,i,j,v[n];

    for (i=0;i<n;i++)
    {   if ((v[i])%2==0)
        {   for (j=0;j<n;j++)
            {   if ((v[j])%2!=0)
                    m=-1;
            }
        }
    }
    if (m==-1)
        cout << "-1";

    if (m!=-1)
    {   if (v[0]%2==0)
        {   cout << "0";
            m=0;
        }
        else
        {   cout << "1";
            m=1;
        }
    }


    return m;
}

int main(){
setlocale (LC_ALL, "Portuguese");

    cout << bloco(vet(tam()));

 return 0;
}
