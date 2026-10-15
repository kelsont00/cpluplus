#include <iostream>

using namespace std;

int main(){

    int i;
        int soma = 0;
        int subtrair = -11;
        double resultado = -1;

        for (i=1; i <=10; i++) {
            soma = soma + i;
        }

        cout << "Soma = " << soma << endl;

        i=-11;
        while (i <=15){
            subtrair = subtrair - i;
            i++;
        }

        cout << "Subtrair = " << subtrair << endl;

        i=16;
        do{
            if(i % 2==0){
                resultado = resultado / i;
            } else
                resultado = resultado * i;
                i++;

        }while (i <=20);

        cout << "Resultado = " << resultado << endl;

   return 0;
}
/*
for
while
do.whle
    1- somar desde de o nº1 ao numero 10 (incluindo 1 e 10)
    2- subtraia desde 11 ao 15 (incluindo 11 e 15)
    3-multiplique ou divida desde  o 16 ao 20 (incluindo 16 e 20)
     - se for pa dividir se for impar multiplica
     */


