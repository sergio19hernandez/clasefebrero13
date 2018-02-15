#include <iostream>//biblioteca de entrada y salida de datos

using namespace std;//caracteres especiales
//algoritmo que calcula sauledo segun las horas trabajadas
int main()
{
    //variable definition
    float ht=0;
    float pago=0;
    cout << "ingrese el numero de horas trabajadas: ";
    //ingreso de datos de usuario
    cin >> ht;
    //condicion para calcular el pago
    if(ht>40)
    {
        pago=(40*5000)+(ht-40)*(5000+(5000*0.5));
        cout << "su pago es: "<< pago;
    }
 else
        {
        pago=ht*5000;
          cout << "su pago es: "<< pago;
        }
    return 0;
}
