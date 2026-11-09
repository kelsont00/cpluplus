#include <iostream>

using namespace std;


int main()
{
    float peso,aclr,massa;

    cout << " Da-me o seu peso \n";
        cin >>peso;
    cout << " Da-me a sua aceleracao da gravidade \n";
        cin >> aclr;

        massa = peso /aclr;

        cout << massa;



    return 0;
}

