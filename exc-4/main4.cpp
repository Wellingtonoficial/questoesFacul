#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int numeros = 0, intervalo1 = 0, intervalo2 = 0, intervalo3 = 0, intervalo4 = 0;
    do{
        cout << "\nDigite um valor positivo ou um valor negativo para encerrar: ";
        cin >> numeros;
        if(numeros >= 0 && numeros <= 25){
            intervalo1++;
        }
        if(numeros >= 26 && numeros <= 50){
            intervalo2++;
        }
        if(numeros >= 51 && numeros <= 75){
            intervalo3++;
        }
        if(numeros >= 76 && numeros <= 100){
            intervalo4++;
        }
        if(numeros > 100){
            cout << "\nNao encontramos intervalo para o valor " << numeros << " digite outro valor! ";
        }
    }while(numeros > 0);
    cout << intervalo1 << " numeros esta no intervalo entre [0-25]." << endl;
    cout << intervalo2 << " numeros esta no intervalo entre [26-50]." << endl;
    cout << intervalo3 << " numeros esta no intervalo entre [51-75]." << endl;
    cout << intervalo4 << " numeros esta no intervalo entre [76-100]." << endl;
return 0;
}
