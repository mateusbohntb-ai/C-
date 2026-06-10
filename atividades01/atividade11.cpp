#include <iostream>
using namespace std;

int main() {
    int vetor[5];
    int soma = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Digite o valor " << i + 1 << ": ";
        cin >> vetor[i];
        soma += vetor[i];
    }

    cout << "Soma do vetor: " << soma << "\n";

    return 0;
}