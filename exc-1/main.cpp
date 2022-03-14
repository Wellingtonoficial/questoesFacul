EXC1:
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << "\n***** a - Para calcular quantas raizes tem a equacao do segundo grau por a, b,c. *****";
    cout << "\n***** b - Calcular a media poderada dos 3 valores. *****";
    cout << "\n***** c - Ordenar os 3 numeros de forma decrescente. *****\n";
    cout << "\n***** d - Ordenar os 3 numeros de forma crescente. *****";
    char opcao;
    cout << "\n\n Escolha a opcao: ";
    cin >> opcao;
    if(opcao == 'a' || opcao == 'A'){
        int a, b, c, calc;
        cout << "\nDigite o valor de A: ";
        cin >> a;
        cout << "\nDigite o valor de B: ";
        cin >> b;
        cout << "\nDigite o valor de C: ";
        cin >> c;
        calc = (b*b) -4 * a * c;
    if(calc > 0){
        cout << "\n 2 raiz";
    }
    else if(calc == 0){
        cout << "\n 1 raiz";
    }
    else{
        cout << "\n sem raiz";
    }
    }
    else if (opcao == 'b' || opcao == 'B'){
        int n1, n2, n3, p1, p2, p3, mediaPoderada;
        cout << "\n Insira o primeiro valor: ";
        cin >> n1;
        cout << "\n Insira o peso: ";
        cin >> p1;
        cout << "\n Insira o segundo valor: ";
        cin >> n2;
        cout << "\n Insira o peso: ";
        cin >> p2;
        cout << "\n Insira o terceiro valor: ";
        cin >> n3;
        cout << "\n Insira o peso: ";
        cin >> p3;
        mediaPoderada = (n1*p1) + (n2*p2) + (n3*p3);
        cout << "\n A media poderada e: " << mediaPoderada;
    }
    else if (opcao == 'c' || opcao == 'C'){
        int n1, n2, n3, temp;
        cout << "\n Insira o primeiro numero: ";
        cin >> n1;
        cout << "\n Insira o segundo numero: ";
        cin >> n2;
        cout << "\n Insira o terceiro numero: ";
        cin >> n3;
        if(n2 > n1){
            temp = n1;
            n1 = n2;
            n2 = temp;
        }
        if(n3 > n1){
            temp = n1;
            n1 = n3;
            n3 = temp;
        }
        if(n3 > n2){
            temp = n2;
            n2 = n3;
            n3 = temp;
        }
        cout << "\nForma decrescente: " <<n1<<" , "<<n2<<" , "<<n3<<endl;
        }
    else if (opcao == 'd' || opcao == 'D'){
        int n1, n2, n3, temp;
        cout << "\n Insira o primeiro numero: ";
        cin >> n1;
        cout << "\n Insira o segundo numero: ";
        cin >> n2;
        cout << "\n Insira o terceiro numero: ";
        cin >> n3;
        if(n2 < n1){
            temp = n1;
            n1 = n2;
            n2 = temp;
        }
        if(n3 < n1){
            temp = n1;
            n1 = n3;
            n3 = temp;
        }
        if(n3 < n2){
            temp = n2;
            n2 = n3;
            n3 = temp;
        }
        cout << "\nForma Crescente: " <<n1<<" , "<<n2<<" , "<<n3<<endl;
    }
    else{
    cout << "\n Valor invalido!";
    }
return 0;
}
