#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;

//Imprimir os primeiros 10.000 números primos.

int main (){
setlocale (LC_ALL, "Portuguese");
    int p,num=1,cont;

    for (p=0;p<10000;p++)
    {
        num=num+1;
        if (num!=2)
        {
           for (cont=2;cont<num;cont++)
            {
                if (num%cont==0)
                {
                    num=num+1;
                    cont=2;
                }
            }
        }
       cout<<num<<endl;
    }
  return 0;
}

