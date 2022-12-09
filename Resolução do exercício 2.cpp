#include<iostream>
#include<math.h>
#include<locale.h>

//Verificar se o caractere é vogal ou consoante.

using namespace std;
int main () {
setlocale (LC_ALL, "Portuguese");

char letra;

cout<< "Insira uma letra:";
cin >> letra ;
if (letra== 'a'|| letra== 'e' || letra== 'i'|| letra=='o'|| letra=='u')
cout<< "A letra '" << letra << "' é uma vogal.";
else
cout<< "A letra '" << letra << "' é uma consoante.";

return 0;
}
