#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;
int fat(int N)
{
int F=1, aux;
for(aux=N;aux>=1;aux--)
F=F*aux;
return F;
}
int main () {
setlocale (LC_ALL, "Portuguese");
//criar uma funcao que receba valor de um inteiro positivo N, calcule e reotrne fatorial desse numero.
int N;
cout<< "forneça valor de N: ";
cin>> N;

cout<< "o fatorial de N é: " << fat(N);
return 0;

}
