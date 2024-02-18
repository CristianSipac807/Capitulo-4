#include <iostream>

using namespace std;
//Ejercico 4.15, el programa calcula el sueldo de un empleado a base de comisiones por ventas


int main()
{
    //primero definimos las variables que vamos a utilizar
    int salario = 200;
    int venta;
    int com;
    int fin;

    cout << "Introduzca el total de ventas en Quetzales: (escriba -1 para salir) ";
        cin >> venta; // definimos que la informacion que se ingresa es la variable venta

    while (venta >=0) // se inicia el ciclo while para iniciar la operacion
    {
    com = venta * 0.09;
    //cout << com << endl;
    fin = com + salario;
    cout << "El salario es: Q" <<fin << endl; // luego de realizar cada operacion se imprime el valor final

    cout << "Introduzca el salario en Quetzales: (escriba -1 para salir) "; // se vuelve a preguntar para darle un fin al programa o seguir escribiendo datos
    cin >> venta; // definimos que la informacion que se ingresa es la variable venta
    }
    return 0;
}
