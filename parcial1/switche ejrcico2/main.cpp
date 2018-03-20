#include <iostream>

using namespace std;

int main()
{
    float sueldo=0;
    int anos=0;
    char desicion;
    cout << "ingrese su  sueldo: ";
    cin >> sueldo;
    cout << "ingrese los años trbajados: ";
    cin >> anos;
    cout << "categoria A ,de 20 a 30 años,aunmento del 15%" <<endl
    << "categoria B ;de 15 a 20 años,aumento del 12%"
    << endl << "categoria C ;de 10 a 15 años,aumento del 10%"<< endl
    << "categoria D ;de 0 a 10 años,sumamos 12usd al sueldo " << endl  ;
    if (anos<30 && anos<20){
        desicion=='a';
    }
        else if (anos<20 && anos>15){
          desicion ='b';
        }
         else if (anos<15 && anos>10 ){
                desicion ='c';
         }
            else if( anos<10 && anos>0){
               desicion ='d';
            }



    switch (desicion){
        case 'a':
            sueldo=sueldo*0.15+sueldo;
            cout << "sueldo con aumento categoria A: ",sueldo;
            break;
        case 'b':
            sueldo=sueldo*0.12+sueldo;
            cout<< "sueldo con aumento categoria B:",sueldo;
            break;
        case 'c':
            sueldo=sueldo*0.10+sueldo;
            cout << "sueldo con aumento categoria C: ",sueldo;
            break;
        case 'd':
            sueldo =sueldo+15;
            cout<< "sueldo con aumento categoria D:", sueldo;
            break;
       default:
        cout << "categoria invalida" ;
        break;
    }



    return 0;
}
