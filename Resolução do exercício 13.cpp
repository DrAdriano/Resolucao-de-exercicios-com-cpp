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
cout<< "forne�a valor de N: ";
cin>> N;

cout<< "o fatorial de N �: " << fat(N);
return 0;

}
