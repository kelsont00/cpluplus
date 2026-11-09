#include <iostream>

using namespace std;


int main()
{
    string nome,localidade,genero,mens;
    int idade;

    cout << "Diz o seu nome? \n";
        cin >> nome;

    cout << "Diz o sua idade? \n";
        cin >>idade;

    cout << "Diz o sua localidade? \n";
        cin >>localidade;

     cout << "Diz o seu genero ?(M/F)\n";
        cin >>genero;


        if (genero == "M"){
            mens = "Caro Sr." + nome;
        }
        else if (genero == "F"){
            mens = "Cara Sra." + nome;
        }


        if (idade >=18){
            mens = mens +" e maior de idade";
        }
        else if (idade <=18){
            mens = mens +" e menor de idade";
        }

        mens = mens + " e mora em ";
        mens = mens + localidade;

    cout <<mens;

return 0;
}
