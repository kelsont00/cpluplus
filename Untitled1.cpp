#include <iostream>

using namespace std;

int  fibonacci (int numero){
    if (numero  == 1 || numero == 2 ){
        return 1;
    }else {
        return fibonacci (numero-1) + fibonacci (numero - 2);
    }
}

int  factorial (int numero){
    if (numero  == 1 || numero == 0 ){
        return 1;
    }else {
        return numero  * factorial (numero - 1);
    }
}

int main (){

    int n = 5;


    cout << fibonacci (n);

    return 0;

 }

