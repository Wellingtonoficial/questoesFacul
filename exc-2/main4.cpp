
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int valor1, valor2, valor3;
    cout << "Digite 3 valores: \n";
    cin >> valor1;
    cin >> valor2;
    cin >> valor3;
    if(valor1 > valor2 && valor1 > valor3){
        cout << "\n O maior valor e: " << valor1;
    }
    else if(valor2 > valor3 && valor2 > valor1){
        cout << "\n O maior valor e: " << valor2;
    }
    else{
        cout << "\n O maior valor e: " << valor3;
    }
return 0;
}
