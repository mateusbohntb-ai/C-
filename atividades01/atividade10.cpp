#include <iostream>
using namespace std;

int main() {
    int vetor[5];

    for (int i = 0; i < 5; i++) {
        cout << "Digite o valor " << i + 1 << ": ";
        cin >> vetor[i];
    }

    cout << "\nValores inseridos:\n";
    for (int i = 0; i < 5; i++) {
        cout << vetor[i] << "\n";
    }

    return 0;
}