#include <iostream>

using namespace std;

int main()
{
   int est=0,prom=0,suma=0,contador=0,cerrar=0;
    while(true){
        while(true){
        contador=contador+1;
        cout<<"ingrese estatura: "<<endl;
        cin >> est;
            if(est>0){
                suma=suma+est;
                cout<< "estatura; "<<suma<< endl;
            }
            cout << "ingrese 0:dar resultado,1:seguir sumando"<<endl;
            cin >> cerrar;
            if(cerrar==0){
                break;
            }


        }
   prom=suma/contador;
   cout<< "pormedio de estaturas es: "<<prom<<endl;
   cout << "ingrese 0:cerrar el programa,1:reiniciar"<<endl;

            cin >> cerrar;
            if(cerrar==0){
                break;
            }
    cin.clear();
    cin.ignore();
   }


    return 0;
}
