#include <iostream>
#include <string>
using namespace  std;
int main(){
    char rangosueldo;
    double salario, aumento, nuevoSalario;
    cout<<"Indicar a que letra desea acceder "<<endl;
    cout<<"a- De 0 a 5,000 lempiras "<<endl;
    cout<<"b- De 5001 a 9,999 lempiras"<<endl;
    cout<<"c- De 10000 a 14,999 "<<endl;
    cout<<"d- mas de 15,000 lempiras"<<endl;
    cin>>rangosueldo;

    cout<<"Ingrese su salario: "<<endl;
    cin>>salario;

    switch (rangosueldo)
    {
        case 'a': case 'A':
            aumento = salario *0.2;
        break;

        case 'b': case 'B':
            aumento = salario *0.1;
            break;

        case 'c': case 'C':
            aumento = salario *0.05;
            break;

        case 'd': case 'D':
            aumento = salario *0.02;
            break;

            default:
             cout<<"Opcion invalida "<<endl;
        break;
    }

    nuevoSalario = salario + aumento;
    cout<<"Su nuevo salario es: "<<nuevoSalario<<endl;
    return 0;
}