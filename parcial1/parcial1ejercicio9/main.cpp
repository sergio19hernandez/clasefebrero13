#include <iostream>//biblioteca de entrada y salida de datos

using namespace std;//caracteres especiales
//algoritmo que calcula impuestos segun el importe bruto
int main()
{
    //variable definition
    float ib=0;
    float in=0;
    cout << "ingrese el importe bruto ,para calcula sus impuestos: ";
    //ingreso de datos de usuario
    cin >> ib;
    //condicion para calcular el pago
    if(ib>15000)
        {
        in=(ib+(ib*0.16));
        cout << "su importe neto  es: "<< in;
        }
            else
                {
                in=(ib+(ib*0.10));
                cout << "su importe neto  es: "<< in;
                }
    return 0;
}

