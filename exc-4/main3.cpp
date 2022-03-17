#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float soma = 0, percentual = 0;
    int numeros = 0, negativo = 0, positivo = 0, cont = 0;
    do{
        cout << "\nDigite um numero ou '0' para parar: ";
        cin >> numeros;
        soma += numeros;
        cont++;
        if(numeros < 0){
            negativo ++;
        }
        if(numeros > 0){
            positivo ++;
        }
    }while(numeros != 0);
    cont--;
    cout << "\n media aritmetica dos numeros: " << soma / cont;
    cout << "\n quantidade de numeros positivos: " << positivo;
    cout << "\n quantidade de numeros negativos: " << negativo;
    cout << "\n Soma dos numeros: " << soma;
    cout << "\n quantidade de numeros: " << cont;
return 0;
}
