#include <iostream>
using namespace std;

int main() {
    int vetor[10], numero;

    cout << "Digite 10 números:\n";
    for (int i = 0; i < 10; i++) {
        cin >> vetor[i];
    }

    cout << "Digite um número para buscar: ";
    cin >> numero;

    bool encontrado = false;
    for (int i = 0; i < 10; i++) {
        if (vetor[i] == numero) {
            encontrado = true;
            break;
        }
    }

    if (encontrado)
        cout << "Número encontrado!\n";
    else
        cout << "Número não encontrado!\n";

    return 0;
}