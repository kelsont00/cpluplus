#include <stdio.h>
#include <iostream>
using namespace std;

// JOGO 4 EM LINHA //

const int LINHAS = 6;
const int COLUNAS = 9;

void mostraTabuleiro(string arr[LINHAS][COLUNAS]);
void preencheTabuleiro(string arr[LINHAS][COLUNAS]);
int pedePecaJogador();
bool colocaPecaTabuleiro(string peca, int coluna, string arr[LINHAS][COLUNAS]);
bool tabuleiroCheio(string arr[LINHAS][COLUNAS]);
bool ganhouJogo(int &quemGanhou, string arr[LINHAS][COLUNAS]);


int main() {


    string tabuleiro[LINHAS][COLUNAS];
    int quemJoga=1;
    int quemGanhou=0;
    int colunaJogar = 0;
    bool jogou = false;

    preencheTabuleiro(tabuleiro);
    tabuleiro[0][1];
      mostraTabuleiro(tabuleiro);

      pedePecaJogador();

    do {
        colunaJogar = pedePecaJogador();
        jogou = colocaPecaTabuleiro("X", colunaJogar, tabuleiro);
    } while (!ganhouJogo(quemGanhou, tabuleiro) && !tabuleiroCheio(tabuleiro));


    return 0;
}

void preencheTabuleiro(string arr[LINHAS][COLUNAS]) {

    for (int i = LINHAS - 1 ; i >= 0; i--){

        cout << "|";
        for (int j = 0; j < COLUNAS; j++){

            cout << arr [i][j] << "|";
        }
        cout << "\n";
    }


}

void mostraTabuleiro(string arr[LINHAS][COLUNAS]) {


    cout << "\n  **** 4 EM LINHAS ****\n";

    cout << "|" << arr [0][1] << "|" << arr [0][1]<< "|" << arr [0][1] << "|" << arr [0][1]<< "|" << arr [0][1] << "|" << arr [0][1]<< "|"<< arr [0][1] << "|" << arr [0][1]<<"|" << arr [0][1]<<"|\n";
    cout << "|" << arr [0][2] << "|" << arr [0][2]<< "|" << arr [0][2] << "|" << arr [0][2]<< "|" << arr [0][2] << "|" << arr [0][2]<< "|"<< arr [0][2] << "|" << arr [0][2]<<"|" << arr [0][2]<<"|\n";
    cout << "|" << arr [0][3] << "|" << arr [0][3]<< "|" << arr [0][3] << "|" << arr [0][3]<< "|" << arr [0][3] << "|" << arr [0][3]<< "|"<< arr [0][3] << "|" << arr [0][3]<<"|" << arr [0][3]<<"|\n";
    cout << "|" << arr [0][4] << "|" << arr [0][4]<< "|" << arr [0][4] << "|" << arr [0][4]<< "|" << arr [0][4] << "|" << arr [0][4]<< "|"<< arr [0][4] << "|" << arr [0][4]<<"|" << arr [0][4]<<"|\n";
    cout << "|" << arr [0][5] << "|" << arr [0][5]<< "|" << arr [0][5] << "|" << arr [0][5]<< "|" << arr [0][5] << "|" << arr [0][5]<< "|"<< arr [0][5] << "|" << arr [0][5]<<"|" << arr [0][5]<<"|\n";
    cout << "|" << arr [0][6] << "|" << arr [0][6]<< "|" << arr [0][6] << "|" << arr [0][6]<< "|" << arr [0][6] << "|" << arr [0][6]<< "|"<< arr [0][6] << "|" << arr [0][6]<<"|" << arr [0][6]<<"|\n";

}

int pedePecaJogador() {

    int col;
    cout << "Em que coluna quer jogar : ";
    cin >> col;

    return 0;
}

bool colocaPecaTabuleiro(string peca, int coluna, string arr[LINHAS][COLUNAS]) {
    return false;
}

bool tabuleiroCheio(string arr[LINHAS][COLUNAS]) {
    return false;
}

bool ganhouJogo(int &quemGanhou, string arr[LINHAS][COLUNAS]) {
    return false;
}





