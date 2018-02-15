#include <iostream>

using namespace std;
// algoritmo para determinar el numero mayor
int main()
{
    //definicion de variables
    float num1=0,num2=0,num3=0 ;
    cout<< "ingrese el primer numero: ";
    cin >> num1;
     cout<< "ingrese el segundo numero: ";
    cin >> num2;
     cout<< "ingrese el tercer numero: ";
    cin >> num3;
    //definicion de las variables
        if(num1>num2 && num1>num3)
            {
            cout << num1 <<" es mayor";
            }
                else if(num2>num1 && num2<num3)
                    {
                    cout << num2<< " es mayor" ;
                    }
                        else
                        {
                        cout << num3 <<" es mayor";

                        }


    return 0;
}
