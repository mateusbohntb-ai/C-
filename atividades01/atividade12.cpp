#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int matriz[2][3];

    cout << "Digite os valores da matriz 2x3:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "\nMatriz 2x3:" << endl;
    cout << "+------+------+------+" << endl;
    for (int i = 0; i < 2; i++) {
        cout << "| " << setw(4) << matriz[i][0]
             << " | " << setw(4) << matriz[i][1]
             << " | " << setw(4) << matriz[i][2]
             << " |" << endl;
        cout << "+------+------+------+" << endl;
    }

    return 0;
}



