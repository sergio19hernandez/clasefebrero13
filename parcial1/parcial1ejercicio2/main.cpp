#include <iostream>// library

using namespace std;//palabras especiales
//algoritmo para conversion de tiempo ,de segusndos a minutos y horas
int main()
{
    //declaracion variables
    float segundos=0;
    float minutos=0;
    float horas=0;
    //ingreso de segundos ,los cuales seran converidos
    cout << "ingrese los segundos que quiera convertir: " ;
    cin >> segundos;
    //proceso para convertir los segundos en horas y minutos
    minutos = segundos/60;
    horas = segundos/3600;
    cout <<"tiempo convertido " << endl << "horas: " << horas << endl << "minutos: " << minutos<<endl << "segundos: " << segundos;

    return 0;
}
