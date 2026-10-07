#include <iostream>
using namespace std;

int main() {

    int n1;

    cout << "Da-me um numero\n";
    cin >> n1;

    if (n1 <0){
    cout <<"numero negativo";
    }

    if (n1 == 0){
    cout << "numero neutro";
    }

    if (n1 >0 && n1 <100){
        cout << "numero positivo pequeno ";
    }
     if (n1 >=100){
        cout << "numero enorme ";
    }





    return 0;
}
