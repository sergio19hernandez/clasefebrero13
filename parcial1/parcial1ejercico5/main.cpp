#include <iostream>

using namespace std;
//algoritmo que obtenga 4 numeros y los organice de menor a mayor
int main()
{
    //definicion de variables
    float n1=0,n2=0,n3=0,n4=0 ;
    cout<< "ingrese un numero: ";
    cin>> n1;
    cout<< "ingrese segundo numero: ";
    cin>> n2;
    cout<< "ingrese tercer numero: ";
    cin>> n3;
    cout<< "ingrese cuarto numero: ";
    cin>> n4;
    //condicionales
    if(n1<n2 && n2<n3 && n3<n4){
        cout << "los numeros ordenados de menor a mayor: " << n1<< "," << n2<< ","  << n3<< ","  << n4;
    }
        else if (n2<n1 && n1<n3 && n3<n4){
        cout <<"los numeros ordenados de menor a mayor: " << n2 << "," << n1<< ","  << n3 << "," << n4;
        }
             else if (n3<n2 && n2<n1 && n1<n4){
            cout <<"los numeros ordenados de menor a mayor: " << n3 << "," << n2<< ","  << n1 << "," << n4;
            }
                else if (n4<n2 && n2<n1 && n1<n3){
                cout <<"los numeros ordenados de menor a mayor: " << n4<< ","  << n2 << "," << n1 << "," << n3;
                }
                    else if (n1<n4 && n4<n3 && n3<n2){
                    cout <<"los numeros ordenados de menor a mayor: " << n1<< ","  << n4<< ","  << n3<< ","  << n2;
                    }
                        else if (n2<n4 && n4<n3 && n3<n1){
                        cout <<"los numeros ordenados de menor a mayor: " << n2<< ","  << n4<< ","  << n3<< ","  << n1;
                        }
                            else if (n2<n3 && n3<n4 && n4<n1){
                            cout <<"los numeros ordenados de menor a mayor: " << n2 << "," << n3 << "," << n4 << "," << n1;
                            }
                                else if (n3<n4 && n4<n2 && n2<n1){
                                cout <<"los numeros ordenados de menor a mayor: " << n3 << "," << n4<< ","  << n2<< ","  << n1;
                                }
                                    else if (n4<n3 && n3<n2 && n2<n1){
                                    cout <<"los numeros ordenados de menor a mayor: " << n4 << "," << n3 << "," << n2<< ","  << n1;
                                    }
                                        else if (n3<n4 && n4<n1 && n1<n2){
                                        cout <<"los numeros ordenados de menor a mayor: " << n3<< ","  << n4<< ","  << n1 << "," << n2;
                                        }
                                            else if (n1<n3 && n3<n4 && n4<n2){
                                            cout <<"los numeros ordenados de menor a mayor: " << n1 << "," << n3 << "," << n4<< ","  << n2;
                                            }
                                                else if (n4<n1 && n1<n3 && n3<n2){
                                                cout <<"los numeros ordenados de menor a mayor: " << n4 << "," << n1 << "," << n3 << "," << n2;
                                                }




    return 0;
}
