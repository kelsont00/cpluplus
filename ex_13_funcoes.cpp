    #include <iostream>

using namespace std;

void menu(){
    std::cout << "\n modo aura";
    std::cout << "\n1 six seven";
    std::cout << "\n2 sair do modo aura";
    std::cout << "\n\n Escolha aura - ";
}

int ano(){

    return 2026;

}
int getyear(){return 2026; }
int getmonth(){return 10; }
int getday(){return 27; }


int aminhaidade(int ano, int mes, int dia){
    int  aux = getyear() - ano;

    if (getmonth()< mes){
        aux --;
    }else {
        if(getday() < dia && getmonth() == mes) {
            aux --;
        }
    }
    return aux;

}

int main() {
    int anoatual, escolha;

    anoatual = ano();
    menu();

    std::cin >> escolha;

    switch (escolha)
    {
        case 1:
            std::cout << anoatual;
            break;

        case 2:
            break;

        default:
            std::cout << "\nEscolha invalida!\n";
    }

    return 0;
}
