#include <iostream>//BIBLIOTECAS DE ENTRADA Y SALIDA

using namespace std;//PALABRAS RESERVADAS

int main()
{
    int contador_par=0;
    int contador_impar=0;

    for(int i=1; i <=100; i++){
        if(i%2==0){
            contador_par=contador_par+1;
            cout << "Numero par es:" << contador_par << endl;
        }
        if (i%2 !=0){
            contador_impar=contador_impar+1;
            cout << "Numero impar es:" << contador_impar << endl;
        }
    }
    return 0;


}
