#include <iostream>

using namespace std;

int main()
{
    int a, b, c, total;


    cout << "Ingrese su entero a:";
    cin >> a;

    cout << "Ingrese su entero b:";
    cin >> b;

    cout << "Ingrese su entero c:";
    cin >> c;

    if ((a+b)>b)
    {
        cout << "Sus valores si pueden ser un triangulo recto"<< endl;
    }
    else
    {
        cout << "Sus valores no pueden ser un triangulo recto"<< endl;
    }
    return 0;
}
