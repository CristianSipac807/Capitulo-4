#include <iostream>

using namespace std;
//este programa imprime un cuadro sin relleno.
int main()
{
    //definimos las variables que vamos a utilizar
    int i, l, fil;

    cout << "De que dimension desea su cuadro: " << endl;
    cin >> fil;

    for (i=0; i<fil; i++)
    {
        for (l=0; l<fil; l++)
        {
         if ((i==0)||(l==0)||(i==fil-1)||(l==fil-1))
         {
             cout << "*";
         }
         else
         {
            cout << " ";
         }
        }
        cout <<"\n";
    }
    return 0;
}
