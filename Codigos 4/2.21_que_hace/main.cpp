#include <iostream>
//el siguiente programa se escribe para saber que imprime el programa propocionado por el libro
using namespace std;

int main()
{
    unsigned int cuenta = 1;

    while (cuenta <= 10)
    {
        //imprime una linea de texto
        cout << (cuenta % 2 ? "****" : "++++++++") << endl;
        ++cuenta; //incrementa la cuenta
    } // fin del while
} // fin del main
