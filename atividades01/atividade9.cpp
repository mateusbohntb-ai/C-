#include <iostream>
using namespace std;

int main() {
    int numero;

    do {
        cout << "Digite um numero inteiro positivo: ";
        cin >> numero;

        if (numero < 0) {
            cout << "Numero negativo, tente novamente!" << endl;
        }

    } while (numero < 0);

    cout << "Numero valido: " << numero << endl;

    return 0;
}