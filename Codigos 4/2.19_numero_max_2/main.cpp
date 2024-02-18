#include <iostream>

using namespace std;
// este programa se utilizo el mismo codigo que en el ejercicio 2.17, con modificaciones para que imprima los dos valores mas grandes
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
    int max1 = valor[0]; // Primer número mas grande
    int max2 = valor[1]; // Segundo número mas grande

    if (max2 > max1)
    {
        int temp = max1;
        max1 = max2;
        max2 = temp;
    }

    for (int i = 2; i < Nventas; i++)
    {
        if (valor[i] > max1)
        {
            max2 = max1; // Actualizamos max2
            max1 = valor[i]; // Actualizamos max1
        }
        else if (valor[i] > max2)
        {
            max2 = valor[i]; // Actualizamos max2
        }

        suma += valor[i];
    }

    cout << "El total de ventas fue: " << suma << endl;
    cout << "Los dos numeros mas grandes son: " << max1 << " y " << max2 << endl;

    return 0;
}
