#include <iostream>

using namespace std;



int obsuma (int n1 , int n2)
{
    return n1 + n2;
}
int obresta (int n1 , int n2)
{
    return n1 - n2;
}
int obmultiplicacion (int n1 , int n2)
{
    return n1 * n2;
}
int obdivision (int n1 , int n2)
{
    return n1 / n2;
}
int main()
{

    int n1, n2;
    int suma, resta, mult,div;
    cout << "+++++ Calculadora con funciones +++" << endl;
    cout << "~~~ 9959-21-4557 Jose Perez ~~~~~" << endl;
    cout <<"Ingrese primer valor"<<endl;
    cin >>n1;
    cout <<"Ingrese segundo valor"<<endl;
    cin >>n2;

    suma = obsuma(n1,n2);
    cout <<"La suma es: "<< suma<<endl;
    resta = obresta(n1,n2);
    cout <<"La resta es: "<< resta<<endl;
    mult = obmultiplicacion(n1,n2);
    cout <<"La multiplicacion es: "<< mult<<endl;
    div = obdivision(n1,n2);
    cout <<"La division es: "<< div<<endl;

    return 0;
}
