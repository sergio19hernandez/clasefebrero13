#include <iostream>

using namespace std;

int main()
{
    int/* menores=0,mayores=0,*/base=0,contador1=0,contador2=0, cerrar=0;
   while(true){

    cout<< "ingrese un numero: ";
    cin>> base;
        if(base<=0)
        {
        contador1=contador1+1;
        cout<< "numero menor a cero:"<<endl;
        }
        if(base>0){

        contador2=contador2+1;
        cout<< "numero mayor a cero:"<<endl;
        }
        cout<<" desea cerrar el programa?,0=si,1=no" << endl;
        cin>>cerrar;
        if(cerrar==0){
        break;
        }
   }
return 0;
  }


