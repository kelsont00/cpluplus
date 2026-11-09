#include <iostream>

using namespace std;

int main(){

      int n1,n2,ex;
      int i = 1;
      cout << "Qual e o seu numero?";
      cin >> n1;

      n2 = n1;

      cout <<"qual o expoente?";
      cin>> ex;
      if (ex == 0){
            cout << "1";

      }else{
      while (ex!=i){
            n1 =n1*n2;
        i++;
      }
      if (n1 != 0) {
        cout <<n1;
      }
    }

   return 0;
}
