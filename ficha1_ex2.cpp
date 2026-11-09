#include <iostream>
using namespace std;

int main() {
    int numero;
    for(int i = 1;i >= 0;i++){
        cout << "opcao 0:\n";
        cout << "opcao 1:\n";
        cout << "opcao 2:\n";
        cout << "opcao 3:\n";
        cin >> numero ;

        switch (numero){

        case 0:
            cout <<"sair do prgrama ";
            break;
        case 1:
            cout <<"e bom programador";
            break;
        case 2:
            cout << "Es muito bom a programar";
            break;
        case 3:
            cout << "excelente programador";
            break;
        default:
            cout <<"nao sei o que me estas a pedir";
            break;
        }
        if (numero == 0) break;
    }

   return 0;
}
