//include
#include <iostream>
using namespace std;

//sistema de converter idade(em dias) em mes ano e dia:

int main() {
    int input;
    cin >> input;
    //verify
    if(input >= 365) {
        return 0;
    };
    //calculo
    int ano = input / 365;
    int meses = ano / 30;
    int dias = ano % meses;
    cout << "Ano(s): " << ano << endl;
    cout << "Mes(s): " << meses << endl;
    cout << "Dia(s): " << dias << endl;
    return 0;
}