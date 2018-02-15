#include <iostream>//biblioteca de entrada y salida de datos

using namespace std;//caracteres especiales
//algoritmo que calcula el descunto segun el monto que compre
int main()
{
    //variable definition
    float compra=0;
    float total=0;
    cout << "ingrese el la cantidad de dinero gastado : ";
    //ingreso de datos de usuario
    cin >> compra;
    //condicion para calcular el pago
    if(compra>1000)
        {
        total=(compra-(compra*0.20));
        cout << "total con un descuento del 20%: "<< total;
        }
            else
            {
            total=(compra-(compra*0.10));
            cout << "total con un descuento del 10%: "<< total;
            }
    return 0;
}

