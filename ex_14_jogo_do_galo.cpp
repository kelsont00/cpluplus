# include <iostream>
using namespace std;

char grelha[9] = {'0','1','2','3','4','5','6','7','8',};

void mostrargrelha(){
    cout << "\n";
    cout << "-----------\n";
    cout << "|" << grelha[0] << " | " << grelha[1] << " | " << grelha[2] <<"|" << "\n";
    cout << "-----------\n";
    cout << "|" << grelha[3] << " | " << grelha[4] << " | " << grelha[5] << "|" <<"\n";
    cout << "-----------\n";
    cout << "|" << grelha[6] << " | " << grelha[7] << " | " << grelha[8] << "|" << "\n";
    cout << "-----------\n";
    cout << "\n";

}
bool verificarvitoria(char jogador) {

    if (grelha[0] == jogador && grelha[1] == jogador && grelha[2] == jogador) return true;
    if (grelha[3] == jogador && grelha[4] == jogador && grelha[5] == jogador) return true;
    if (grelha[6] == jogador && grelha[7] == jogador && grelha[8] == jogador) return true;

    if (grelha[0] == jogador && grelha[3] == jogador && grelha[6] == jogador) return true;
    if (grelha[1] == jogador && grelha[4] == jogador && grelha[7] == jogador) return true;
    if (grelha[2] == jogador && grelha[5] == jogador && grelha[8] == jogador) return true;

    if (grelha[0] == jogador && grelha[4] == jogador && grelha[8] == jogador) return true;
    if (grelha[2] == jogador && grelha[4] == jogador && grelha[6] == jogador) return true;

    return false;
}
bool jogoTerminou() {

    if (verificarvitoria('X') || verificarvitoria('O')) return true;

    for(int i = 0; i < 9; i++) {
        if (grelha[i] != 'X' && grelha[i] != 'O') return false;
    }
    return true;
}

bool colocarPeca(int posicao, char jogador) {
    if (posicao >= 0 && posicao <= 8 && grelha[posicao] != 'X' && grelha[posicao] != 'O') {
        grelha[posicao] = jogador;
        return true;
    }
    return false;

}
int main()
{
   char jogadorAtual = 'X';
    int jogada;
    bool jogadaValida;

    cout << "=== Jogo do Galo ===\n";

    while (!jogoTerminou()) {
        mostrargrelha();

        do {
            cout << "\n Jogador " << jogadorAtual << ",podes jogar ";
            cin >> jogada;

            jogadaValida = colocarPeca(jogada, jogadorAtual);

            if (!jogadaValida) {
                cout << "\n ESSE NUMERO NAO TEM AI SEU BURRO \n";
            }
        } while (!jogadaValida);

        if (verificarvitoria(jogadorAtual)) {
            break;
        }

        jogadorAtual = (jogadorAtual == 'X') ? 'O' : 'X';
    }

    mostrargrelha();

    if (verificarvitoria('X')) {
        cout << "Parabens! As pecas 'X' ganharam o jogo!\n";
    } else if (verificarvitoria('O')) {
        cout << "Parabens! As pecas 'O' ganharam o jogo!\n";
    } else {
        cout << "O jogo terminou em EMPATE!\n";
    }

    return 0;
}
