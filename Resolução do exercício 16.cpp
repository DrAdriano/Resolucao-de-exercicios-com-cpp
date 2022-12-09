#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;


int main (){
setlocale (LC_ALL, "Portuguese");
    int i,j;
    float m=0,M[4][4];

    for (i=0;i<4;i++)
        for (j=0;j<4;j++)
        {   cout<< "Digite o valor para a linha " << i+1 << ", coluna "<<j+1 <<":";
            cin>>M[i][j];
        }

    cout<<endl;
    cout<< "Temos, assim, a matriz: "<< endl;
    cout<<endl;

    for (i=0;i<4;i++)
    {   for (j=0;j<4;j++)
        cout<<" "<<M[i][j]<<" ";
        cout<<endl;
    }

    for (i=0;i<4;i++)
        for (j=0;j<4;j++)
            m=m+M[i][j];

    m=m/16;

    cout<<endl;
    cout << "A média será, então: " << m << endl;

    for (i=0;i<4;i++)
        for (j=0;j<4;j++)
        {   if (M[i][j]==m)
                M[i][j]=0;
            else
            {   if (M[i][j]>=m)
                    M[i][j]=1;
                else
                {   if (M[i][j]<=m)
                    M[i][j]=-1;
                }
            }
        }

    cout<<endl;
    cout<< "A matriz resultante será: "<< endl;
    cout<<endl;

    for (i=0;i<4;i++)
    {   for (j=0;j<4;j++)
        cout<<" "<<M[i][j]<<" ";
        cout<< endl;
    }

return 0 ;
}
