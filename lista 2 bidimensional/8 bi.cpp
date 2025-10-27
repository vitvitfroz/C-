#include <iostream>
using namespace std;

int contarOcorrencias(int matriz[4][4], int numero) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] == numero) count++;
        }
    }
    return count;
}

int main() {
    int matriz[4][4] = {{1,2,3,4},{5,6,7,8},{9,0,1,2},{3,4,5,6}};
    int numero = 5;
    cout << "O número " << numero << " aparece " << contarOcorrencias(matriz, numero) << " vezes.\n";
    return 0;
}