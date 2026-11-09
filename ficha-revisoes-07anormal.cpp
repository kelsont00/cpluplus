#include <iostream>

using namespace std;


int main()
{
    int x,y;
    float z,a,b,c;


    cout << " Da-me um numero inteiro \n";
    cin >> x;
    cout << " Da-me outro numero inteiro \n";
    cin >> y;
    cout << "Da-me um numero real \n";
    cin >> z;

    a = (y*2) * (x/2);
    b = (3*z + x);
    c = (z*z*z);

    cout << " a e "<<a;
    cout << "b e "<<b;
    cout << "c e "<< c;

        return 0;
}
