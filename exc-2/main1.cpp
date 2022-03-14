#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float altura, resultado;
    char sexo;
    cout << "\n Digite sua altura em metros centimetros: ";
    cin >> altura;
    cout << "\n Digite seu sexo M(masculino) F(feminino): ";
    cin >> sexo;
    if(sexo == 'm'){
        resultado = (72.7 * altura) - 58;
        cout << "\nSeu peso ideal deve ser: " << resultado << " kg";
    }
    else if(sexo == 'f'){
        resultado = (62.1 * altura) - 44.7;
        cout << "\nSeu peso ideal deve ser: " << resultado << " kg";
    }
    else{
        cout << "\n VALOR INVALIDO!";
    }
return 0;
}
