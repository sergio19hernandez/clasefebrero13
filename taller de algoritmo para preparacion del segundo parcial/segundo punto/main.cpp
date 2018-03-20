#include <iostream>

using namespace std;

int main()
{
    int suma=0,numeros=0;
    for(int i=0;i<10;i++){
        cout<< "ingrese el numero que desea sumar: " ;
        cin >> numeros;
        suma=suma+numeros;
        cout << " hasta el momento:"<<suma<<endl;
    }
    cout<<"suma total: " <<suma;
    return 0;
}
