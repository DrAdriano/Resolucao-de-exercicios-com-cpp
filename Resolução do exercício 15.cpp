#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;


int main (){
setlocale (LC_ALL, "Portuguese");
    int n,i,j;

    cout << "Forne�a um n�mero interiro positivo n: ";
    cin >> n;

    for (i=0;i<=n;i++)
    {   for (j=0;j<i;j++)
            cout << i <<" ";
        cout << endl;
    }

return 0 ;
}
