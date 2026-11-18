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


int main(){

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
