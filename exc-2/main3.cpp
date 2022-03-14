#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int Nlados;
        cout << "\nInforme o numero de lados de um poligno regular: ";
        cin >> Nlados;
    if(Nlados < 3 ){
        cout << "\n NAO E UM POLIGNO.";
    }
    else if(Nlados > 5){
        cout << "\n POLIGNO NAO IDENTIFICADO.";
    }
    else{
        if(Nlados == 3){
            float base, altura;
            cout << "\n TRIANGULO";
            cout << "\n Informe a base do triangulo: ";
            cin >> base;
            cout << "\n Informe a altura do triangulo: ";
            cin >> altura;
            cout << "\n A area do triangulo e: " << (base*altura)/2.0 << " cm quadrado";
        }
        else if(Nlados == 4){
            float lado;
            cout << "\n QUADRADO";
            cout << "\n Informe a medida de um lado do quadrado: ";
            cin >> lado;
            cout << "\n A area do quadrado e: " << lado * 4.0 << " cm quadrado";
        }
        else if(Nlados == 5){
            float medidaLado, area;
            cout << "\n PENTAGONO";
            cout << "\n Informe a medida do lado do pentagono: ";
            cin >> medidaLado;
            area = 1.72 * (medidaLado*medidaLado);
            cout << "\n A area do pentagono regular e: " << area << " cm quadrado";
        }
        else{
            cout << "\n Esse valor nao esta registrado!";
        }
    }
return 0;
}
