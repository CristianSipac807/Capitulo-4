#include <iostream>

using namespace std;

//este programa es un traductor de binario a decimal
int main()
{
    int num, digito, pos=0, resul=0;
    int vector []={1,2,4,8,16,32,64,128,256};

    cout << "Ingrese el numero en binario: " << endl;
    cin >> num;

    while (num > 0)
    {
        digito= num%10;
        if (digito ==1)
        resul = resul + vector [pos];

        pos++;
        num= num/10;
    }
    cout << "El resultado en decimal es: " << resul <<endl;
}
