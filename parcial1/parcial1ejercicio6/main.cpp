#include <iostream>

using namespace std;

int main()
{
     //definicion de variables
    float n1=0,n2=0,n3=0;
    //algoritmo que determina si la forma de ingresar los numeros es creciente
    cout<< "ingrese un numero: ";
    cin>> n1;
    cout<< "ingrese segundo numero: ";
    cin>> n2;
    cout<< "ingrese tercer numero: ";
    cin>> n3;
    //condicion

    if(n1<n2 && n2<n3 ){
        cout << "numeros crecientes: " << n1<< "," << n2<< ","  << n3;
    }
        else  {
        cout <<"numeros no crecientes "  ;
        }



    return 0;
}
