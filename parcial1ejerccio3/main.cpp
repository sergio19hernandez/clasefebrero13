#include <iostream>

using namespace std;//palabras reservadas
//algoritmo de calculo de eficacia energetica
int main()
{
    //definicion de variable
    float ee=0;
    cout <<"ingrese la eficacia energetica de la termo electrica ,que en general es de 10000kw: ";
    cin >> ee;
    //condicion para hayar la eficiencia energetica
        if (10000*0.8<ee && ee<10000)
        {
            cout <<"consumo medio";
        }
            else if (ee>10000)
            {
            cout<<"alto consumo de energia";
            }



    return 0;
}
