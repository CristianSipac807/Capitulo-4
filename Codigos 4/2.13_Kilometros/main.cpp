#include <iostream>

using namespace std;

int main()
{
    //definimos nuestras variables
    int kil, litros;
    double total;

    cout << "Introduzca el total de kilometros conducidos: (escriba -1 para salir) ";
    cin >> kil; // definimos que la informacion que se ingresa es la variable kil

    while (kil >=0)
    {
        cout << "Introduzca los litros: ";
        cin >> litros; // definimos total

        total = kil / litros;
        //definimos la operacion para encontrar nuestro total

        cout << "KPL en este reabstecimiento: "<< total <<endl;

         cout << "Introduzca el total de kilometros conducidos: (escriba -1 para salir) ";
    cin >> kil; // definimos que la informacion que se ingresa es la variable kil
    }
    return 0;
}
