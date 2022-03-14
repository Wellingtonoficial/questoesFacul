#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int lado1, lado2, lado3;
    cout << "\nInforme um lado do triangulo: ";
    cin >> lado1;
    cout << "\nInforme o segundo lado do triangulo: ";
    cin >> lado2;
    cout << "\nInforme o terceiro lado do triangulo: ";
    cin >> lado3;
    if(lado1 == lado2 && lado1 == lado3){
        cout << "\n Esse e um triangulo equilatero";
    }
    else if(lado1 == lado2 && lado1 != lado3 || lado2 == lado3 && lado2 != lado1 || lado3 == lado1 && lado3 != lado2){
        cout << "\n Esse e um triangulo Isoscele";
    }
    else if(lado1 != lado2 && lado1 != lado3){
        cout << "\n Esse e um triangulo Escaleno";
    }
return 0;
}
