#include <iostream>

using namespace std;

int main()
{
     //definicion de variables
    float n1=0,n2=0,n3=0;
    //algoritmo que dice si la suma de los dosprimeros numeros es el tercer numero
    cout<< "ingrese un numero: ";
    cin>> n1;
    cout<< "ingrese segundo numero: ";
    cin>> n2;
    cout<< "ingrese tercer numero: ";
    cin>> n3;
    //condicion
    if(n3==n1+n2 ){
        cout << "el tercer numero es la suma del primer y segundo numero :"<< n3 ;
    }
        else  {
        cout <<"el tercer numero no es la suma de los dos primero numeros "  ;
        }



    return 0;
}
