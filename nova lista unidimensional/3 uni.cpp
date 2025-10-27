#include <iostream>
using namespace std;

int main() {
    float vetor[8], soma = 0;

    cout << "Digite 8 números reais:\n";
    for (int i = 0; i < 8; i++) {
        cin >> vetor[i];
        soma += vetor[i];
    }

    cout << "Média: " << soma / 8 << endl;
    return 0;
}