#include <iostream>//libreria de entrada y salid ade datos

using namespace std;
//porgrama que permite el ingreso de las edades de una cantidad n de alumnos y saca el pormedio
int main()//programa principal
{
    while(true){//ciclo principar,es el que va a cerrar el programa
        int edades=0,promedio=0,cerrar=0,suma=0,contador=0,cantidad_alumnos=0;//variables
        cout<< "ingrese la cantidad de alumnos: ";
        cin>> cantidad_alumnos;
            while(contador<cantidad_alumnos){
                cout<< "ingrese su edad:";
                cin>> edades;
                contador=contador+1;
                    if(edades<18){
                    suma=suma+edades;
                    cout << "suma de edades hasta el momento: "<<suma<<endl;
                    }
                    else{
                    promedio=suma/(contador-1);
                    cout << "pomedio de edad sin el alumno mayor de 18 es : "<<promedio<<endl;
                    }
                    cout<< "promedio de las sumas:"<<suma/(contador);
            }
    cout<<" desea cerrar el programa?,0=si,1=no";
    cin>>cerrar;
    if(cerrar==0){
        break;
    }
    }
return 0;
}
