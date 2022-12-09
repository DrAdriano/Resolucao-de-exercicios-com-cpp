#include<iostream>
#include<math.h>
#include<locale.h>

// Soma de todos os inteiros entre dois números fornecidos.

using namespace std;
int main () {
setlocale (LC_ALL, "Portuguese");
int n,m,i,soma=0;
cout<< "insira um numero inteiro: ";
cin>> n;
cout<< "insira outro numero inteiro: ";
cin>> m;

if (n>m)
{   for (i=m+1; i<n; i++)
    soma=soma+i;

    cout<< soma;
}
else
{   for (i=n+1; i<m; i++)
    soma=soma+i;

    cout<< soma;
}

return 0;
}

