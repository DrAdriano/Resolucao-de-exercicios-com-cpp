#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;

int main (){
setlocale (LC_ALL, "Portuguese");
    int N1,N2,N3,N4;
    float n;
    char l;

    cout << "Forne�a a primeira nota:";
    cin >> N1;
    cout << "Forne�a a segunda nota:";
    cin >> N2;
    cout << "Forne�a a terceira nota:";
    cin >> N3;
    cout << "Forne�a a quarta nota:";
    cin >> N4;
    cout << "Forne�a uma das letras mai�scas A, P ou S:";
    cin >> l;

    if (l=='A')
       n=(N1+N2+N3+N4)/4;

    if (l=='P')
        n=(5*N1+3*N2+2*N3+N4)/11;

    if (l=='S')
        n=(N1+N2+N3+N4);

    cout << endl <<"O valor calculado �: " << n;

return 0;
}
