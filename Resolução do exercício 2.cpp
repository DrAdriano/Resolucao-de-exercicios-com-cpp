#include<iostream>
#include<math.h>
#include<locale.h>

//Verificar se o caractere � vogal ou consoante.

using namespace std;
int main () {
setlocale (LC_ALL, "Portuguese");

char letra;

cout<< "Insira uma letra:";
cin >> letra ;
if (letra== 'a'|| letra== 'e' || letra== 'i'|| letra=='o'|| letra=='u')
cout<< "A letra '" << letra << "' � uma vogal.";
else
cout<< "A letra '" << letra << "' � uma consoante.";

return 0;
}
