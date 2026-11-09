#include <iostream>

using namespace  std;

int main() {
    float n1,n2;
    float calculo;
    string operacao;

    cout <<" operacoes possiveis:\n";

    cout <<"somar\n";
     cout <<"subtrair\n";
     cout <<"multiplicar\n";
     cout <<"dividir\n";

     cout << "Diz qual operacao quer efetuar: ";
     cin >>operacao;

     cout << "Diz o 1.num: ";
     cin >>n1;
     cout << "Diz o2.num: ";
     cin >>n2;

     if (operacao == "somar"){
        cout << "somar = "<<(n1+n2);
     }
    else if (operacao == "subetrair"){
        cout << " subetrair = "<<(n1-n2);
     }
    else if (operacao == "multiplicacao"){
        cout << "multiplicacao = "<<(n1*n2);
     }
    else if (operacao == "dividir"){

        if (n2 == 0) {
            cout << "Imposivel fazer  o calculo";
            cout << "o n2 nao poder ser 0";
        }else {
          calculo = (n1) / (n2);
        cout << "dividir = "<<calculo;
        }

    }else {
        cout << "o que raio queres fazer !!";

     }
}
