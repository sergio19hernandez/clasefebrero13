#include <iostream>//biblioteca de entrada y salida de datos

using namespace std;

int main()
{
    //variable definition
    int ht=0;
    int pago=0;
       //ingreso de datos de usuario
    cout << "ingrese el numero de horas trabajadas: ";
    //operaciones para calcular el salario
    cin >> ht;
    if(ht>40)
    {
        pago=(40*5000)+(ht-40)*(5000+(5000*0.5));
        cout << "su pago es: "<< pago;
    }
 else
        {
        pago=
        ht*5000;
          cout << "su pago es: "<< pago;
        }
    return 0;
}
