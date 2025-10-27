#include <iostream>
using namespace std;

int main() {
    int matriz[4][4], maior;

    cout << "Digite os elementos da matriz 4x4:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matriz[i][j];
            if (i == 0 && j == 0) maior = matriz[i][j];
            else if (matriz[i][j] > maior) maior = matriz[i][j];
        }
    }

    cout << "Maior elemento: " << maior << endl;
    {
    return 0;
}