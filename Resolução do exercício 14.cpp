#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;

int fat(int N)
{
int F=1, aux;
for(aux=N;aux>=1;aux--)
F=F*aux;
return F;}

float soma(int N) {
float S = 1;
int i;
for (i=1;i<=N;i++)
S = S + 1.0/fat(i);
return S;
}
//escreva uma funcao que recebe por parametro um valor inteiro e positivo N e retorna o valor de S. S = 1 + 1/1! + 1/2! + 1/3! + 1/N!
int main () {
setlocale (LC_ALL, "Portuguese");
int N;
cout << "forneça o valor de N: ";
cin >> N;
cout<<"soma é: " << soma(N);
return 0;
}






