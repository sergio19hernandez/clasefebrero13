#include <iostream>//biblioteca de entrada y salida de datos

using namespace std;//caracteres especiales
//algoritmo que calcula el sueldo segun lo que se gane
int main()
{
    //variable definition
    float sueldo=0;
    float total=0;
    cout << "ingrese el la cantidad de sueldo : ";
    //ingreso de datos de usuario
    cin >> sueldo;
    //condicion para calcular el pago
    if(sueldo<=1000)
        {
        total=(sueldo-(sueldo*0.10));
        cout << "sueldo con un descuento del 10%: "<< total;
        }
            else if(sueldo>1000 && sueldo<2000)
            {
            total=(sueldo-(sueldo*0.05));
            cout << "total con un descuento del 5%: "<< total;
            }
                else
                {
                 total=(sueldo-(sueldo*0.03));
                cout << "sueldo con un descuento del 3%: "<< total;
                }
    return 0;
}

