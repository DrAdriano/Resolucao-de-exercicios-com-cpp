#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;


int main (){
setlocale (LC_ALL, "Portuguese");
    float A[5],B[5];
    int i;

    for (i=0;i<5;i++)
    {   cout << "Forneça um valor positivo para A[" << i << "]: ";
        cin >> A[i];
        if (A[i]<0)
        {   cout << "Não pode forneçer valores negativos, então, novamente:" << endl;
            i=i-1;
        }
    }

    cout << endl;

    for (i=0;i<5;i++)
    {   B[i]=sqrt(A[i]);
        cout << "O valor de B[" << i << "] será: " << B[i] << endl;
    }

return 0 ;
}
