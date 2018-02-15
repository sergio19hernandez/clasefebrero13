#include <iostream>//biblioteca de entrada y salida de datos

using namespace std;//caracteres especiales
//algoritmo que calcula el area de un circulo
int main()
{
    //variable definition
    float area=0;
    float radio=0;
    cout << "ingrese el radio del circulo: ";
    //ingreso de datos de usuario
    cin >> radio;

    //condicion para calcular el pago
    if(radio>39.8942)
    {

        cout << "Datos erroneos ";
    }
        else {

            area= 3.14*(radio*radio);
            cout << "el area es: "<< area;
            }
    return 0;
}
