#include <iostream>
#include <stdio.h>

using namespace std;

const int LINHAS = 6;
const int COLUNAS = 9;

void mostraTabuleiro(string arr [LINHAS][COLUNAS]);
int pedePecaJogador();
bool colocaPecaTabuleiro(string peca, int coluna, string arr [LINHAS][COLUNAS]);
bool tabuleiroCheio(string arr [LINHAS][COLUNAS]);
bool ganhouJogo(int &quemGanhou, string arr [LINHAS][COLUNAS]);
string tabuleiro;


int main(){



    cout << "\n";
    cout << char(201) << char(205) << char(205) << char(205)
         << char(203) << char(205) << char(205) << char(205)
         << char(203) << char(205) << char(205) << char(205)
         << char(187) << "\n";


    cout << char(186) << " " << tabuleiro[0] << " "
         << char(186) << " " << tabuleiro[1] << " "
         << char(186) << " " << tabuleiro[2] << " "
         << char(186) << "\n";


    cout << char(204) << char(205) << char(205) << char(205)
         << char(206) << char(205) << char(205) << char(205)
         << char(206) << char(205) << char(205) << char(205)
         << char(185) << "\n";


    cout << char(186) << " " << tabuleiro[3] << " "
         << char(186) << " " << tabuleiro[4] << " "
         << char(186) << " " << tabuleiro[5] << " "
         << char(186) << "\n";


    cout << char(204) << char(205) << char(205) << char(205)
         << char(206) << char(205) << char(205) << char(205)
         << char(206) << char(205) << char(205) << char(205)
         << char(185) << "\n";


    cout << char(186) << " " << tabuleiro[6] << " "
         << char(186) << " " << tabuleiro[7] << " "
         << char(186) << " " << tabuleiro[8] << " "
         << char(186) << "\n";


    cout << char(186) << " " << tabuleiro[0] << " "
         << char(186) << " " << tabuleiro[1] << " "
         << char(186) << " " << tabuleiro[2] << " "
         << char(186) << "\n";


    cout << char(186) << " " << tabuleiro[6] << " "
         << char(186) << " " << tabuleiro[7] << " "
         << char(186) << " " << tabuleiro[8] << " "
         << char(186) << "\n";


    cout << char(186) << " " << tabuleiro[0] << " "
         << char(186) << " " << tabuleiro[1] << " "
         << char(186) << " " << tabuleiro[2] << " "
         << char(186) << "\n";



    cout << char(204) << char(205) << char(205) << char(205)
         << char(206) << char(205) << char(205) << char(205)
         << char(206) << char(205) << char(205) << char(205)
         << char(185) << "\n";


    cout << char(186) << " " << tabuleiro[3] << " "
         << char(186) << " " << tabuleiro[4] << " "
         << char(186) << " " << tabuleiro[5] << " "
         << char(186) << "\n";


    cout << char(204) << char(205) << char(205) << char(205)
         << char(206) << char(205) << char(205) << char(205)
         << char(206) << char(205) << char(205) << char(205)
         << char(185) << "\n";


    cout << char(186) << " " << tabuleiro[6] << " "
         << char(186) << " " << tabuleiro[7] << " "
         << char(186) << " " << tabuleiro[8] << " "
         << char(186) << "\n";


    cout << char(200) << char(205) << char(205) << char(205)
         << char(202) << char(205) << char(205) << char(205)
         << char(202) << char(205) << char(205) << char(205)
         << char(188) << "\n\n";

    string tabuleiro[LINHAS][COLUNAS];
    int quemJoga =1;
    int quemGanhou = 0;
    int colunaJogar = 0;
    bool jogou = false;

    do {
        mostraTabuleiro(tabuleiro);
        colunaJogar = pedePecaJogador();
        jogou = colocaPecaTabuleiro("x",colunaJogar, tabuleiro);

    }while (quemGanhou== 0 && ! tabuleiroCheio(tabuleiro) && ! tabuleiroCheio(tabuleiro));

    //cout << mostraTabuleiro << pedePecaJogador << colocaPecaTabuleiro << colocaPecaTabuleiro << tabuleiroCheio << tabuleiroCheio << LINHAS << COLUNAS;

    return 0;
}


void mostraTabuleiro(string arr [LINHAS][COLUNAS]){


}

int pedePecaJogador(){

    return 0;

}

bool colocaPecaTabuleiro(string peca, int coluna, string arr [LINHAS][COLUNAS]){

    return false;

}

bool tabuleiroCheio(string arr [LINHAS][COLUNAS]){

    return false;

}

bool ganhouJogo(int &quemGanhou, string arr [LINHAS][COLUNAS]){

    return false;

}
