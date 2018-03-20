#include <iostream>

using namespace std;

int main()
{
    int edades=0,promedio=0,cerrar=0,suma=0,contador=0,cantidad_alumnos=0;
    cout<< "ingrese la cantidad de alumnos: ";
    cin >> cantidad_alumnos;

        for(int i=0;i=cantidad_alumnos;i++){
            cout<< "ingrese su edad:";
            cin>> edades;
            contador=contador+1;
                if(edades<18){
                suma=suma+edades;
                cout << "suma de edades hasta el momento"<<suma<<endl;
                }
                else{
                cout << "pomedio de esdades sin el alumno mayor de 18 es : "<<promedio<<endl;
                promedio=suma/contador;
                break;
                }

        cout<<"ingrese un 0 si desea abandonar la pantalla,o un uno si desea reiniciar: "<<endl ;
        cin>> cerrar;
        if(cerrar==0){
            break;
        }
    }

    return 0;
}
