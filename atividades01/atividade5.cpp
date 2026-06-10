em C++20:47cpp#include <iostream>
using namespace std;

int main() {
    int nota;

    cout << "Digite a nota do aluno (0 a 100): ";
    cin >> nota;

    if (nota >= 90) {
        cout << "Excelente" << endl;
    } else if (nota >= 70) {
        cout << "Bom" << endl;
    } else {
        cout << "Precisa melhorar" << endl;
    }

    return 0;
}