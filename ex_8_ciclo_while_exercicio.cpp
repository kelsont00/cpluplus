#include <iostream>

using namespace std;

int main(){

      int x;
   do {
        cout << "opcao 0(vai sair do prgrama ):\n";
        cout << "opcao 1:\n";
        cout << "opcao 2:\n";
        cout << "opcao 3:\n";
        cin >> x ;

        switch (x){

        case 0:
            cout <<"sair do prgrama \n";
            break;
        case 1:
            cout <<"e bom programador \n";
            break;
        case 2:
            cout << "Es muito bom a programar\n";
            break;
        case 3:
            cout << "excelente programador\n";
            break;
        default:
            cout <<"nao sei o que me estas a pedir\n";
            break; }
        } while (x != 0);


   return 0;
}
