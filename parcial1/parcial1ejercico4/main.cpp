#include <iostream>

using namespace std;
//algoritmo para segun el numero del 1 al 7 diga el dia que corresponde al numero
int main()
{
    //declaracion de variablre
    int dia=0;
    cout<< "ingrese un numero del 1 al 7 : ";
    cin >> dia;
    //condicional
    if(dia==1){
        cout <<"el dia es lunes ";
    }
        else if (dia==2){
            cout<< "el dia es martes ";
        }
            else if (dia==3){
            cout<< "el dia es miercoles";
            }
                else if (dia==4){
                cout<< "el dia es jueves ";
                }
                    else if (dia==5){
                    cout<< "el dia es viernes";
                    }
                        else if (dia==6){
                        cout<< "el dia es sabado ";
                        }
                            else {
                            cout<< "el dia es domingo";
                            }


    return 0;
}
