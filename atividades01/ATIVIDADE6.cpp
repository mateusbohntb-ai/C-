#include <iostream>
using namespace std;

int main() {
    char opcao;

    cout << "Digite uma opção (A, B ou C): ";
    cin >> opcao;

    switch (opcao) {
        case 'A':
        case 'a':
            cout << "Opção A selecionada" << endl;
            break;
        case 'B':
        case 'b':
            cout << "Opção B selecionada" << endl;
            break;
        case 'C':
        case 'c':
            cout << "Opção C selecionada" << endl;
            break;
        default:
            cout << "Opção inválida" << endl;
    }

    return 0;
}