#include <iostream>
using namespace std;

int main() {
    int vetor1[5], vetor2[5], intercalado[10];

    cout << "Digite 5 elementos para o primeiro vetor:\n";
    for (int i = 0; i < 5; i++) cin >> vetor1[i];

    cout << "Digite 5 elementos para o segundo vetor:\n";
    for (int i = 0; i < 5; i++) cin >> vetor2[i];

    for (int i = 0; i < 5; i++) {
        intercalado[2 * i] = vetor1[i];
        intercalado[2 * i + 1] = vetor2[i];
    }

    cout << "Vetor intercalado: ";
    for (int i = 0; i < 10; i++) {
        cout << intercalado[i] << " ";
    }
    cout << endl;

    return 0;
}