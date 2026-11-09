#include <iostream>

using namespace std;

    int  factorial(int numero){
    if (numero==0 ){
        return 0;
    }else {
        if (numero>0){
              return numero  + factorial (numero - 1);
        }else {
                return numero  + factorial (numero + 1);
        }
    }

}

int main (){
    int numero;

    cout << "Da me um numero \n";
    cin >> numero;

    cout << "soma: " << factorial(numero);

       return 0;
}




