#include <iostream>

using namespace std;


int main()
{
    float f,c;

    cout <<"Diz a sua temperatura em gaus Farenheit e passo parra graus celcius";
    cin >> f ;

    c = (5 * (f-32) / 9);
    cout <<c;


    return 0;
}
