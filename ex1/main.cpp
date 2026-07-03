//include
#include <iostream>
using namespace std;

//sistema de converter idade(em dias) em mes ano e dia:

int calculo(int input) {
    if (input >= 365) {
        return 0;
    }
    int ano = input / 365;
    int meses = ano / 30;
    int dias = dias % meses;
    cout << "Ano(s): " << ano << endl;
    cout << "Mes(s): " << meses << endl;
    cout << "Dia(s): " << dias << endl;
}

int main() {
    int input;
    cin >> input;
    int calculo(input);
    return 0;
}