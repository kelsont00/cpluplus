#include <iostream>
#include <string>

using namespace std;

string funcaoAscii(int numero){
    if (numero < 255 ){
        return "";
    }
    return char(numero) + string ("\n") + funcaoAscii (numero +1);
}
int main () {

    cout << funcaoAscii(0);

    return 0;
}

