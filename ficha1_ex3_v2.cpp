#include <iostream>

using namespace std;

int main(){

    int n1,n2,aux;
    int soma = 0;

    cout << "\nDame um numero";
    cin >> n1;
    cout << "\nDame outro numero";
    cin >> n2;

    if (n2 <n1) {
        aux = n1;
        n1 = n2;
        n2 = aux;
    }

    for(int i=n1;i<=n2;i++){
        soma = soma +i;

    }

cout << soma;

    return 0;
}
