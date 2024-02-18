#include <iostream>
//este programa sirve para ingresar una lista de 10 empleados y encontrar la suma de ventas que realizo cada empleado y quien vendio mas
using namespace std;

int main()
{
    //iniciamos el codigo para generar las listas
    const int Nventas = 10;
    int suma = 0;
    int valor [Nventas];
    // se establecen las variables
    // se inicia un ciclo for para que llegen los 10 datos
    for (int i=0; i<Nventas; i++)
    {
        cout << "Ingrese las ventas que realizo el empleado " << i << ":";
        cin >> valor[i];
        // se establece la cantidad de valor
    }
    //se  indica el maximo
    int max=valor[0];
    int Nmax=0;
    for (int i=0; i<Nventas; i++)
    {
        if (valor[i]>max)
        {
            max=valor[i];
            Nmax = i; // se utiliza el ciclo if para encontrar el maximo y la posicion en la que se encuentra
        }
    suma = suma +valor[i]; // luego se establece la suma
    }
    cout << "El total de ventas fue: " << suma << endl;
    cout << "La cantidad maxima vendida por un solo empleado es de: " << max <<" siendo el vendedor No."<<Nmax << endl;
    // para finalizar se imprime todo en la pantalla
}

