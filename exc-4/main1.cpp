#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int somaImpar = 0;
    for(int i = 1; i <= 500; i++){
        if(i % 2 == 1){
            if(i % 3 == 0){
            cout << i << ", ";
            somaImpar += i;
            }
        }
    }
    cout << "\n\nSoma de todos numeros impares multiplo de 3 entre 1 e 500 e: " << somaImpar;
return 0;
}
