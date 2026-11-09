#include <iostream>

using namespace std;


int main()
{
   float dinheiro,horas,resultado1,ano,resultado2;
    cout << "Quando e que voce ganha por hora \n";
    cin >> dinheiro;
    cout << "Agora quantas horas trabalhas por mes \n";
    cin >> horas;

    resultado1 = horas * dinheiro;
    resultado2= resultado1 * 12;

    cout << "por mes voce ganha " << resultado1;
    cout << " E por ano voce ganha"<< resultado2;





          return 0;
}
