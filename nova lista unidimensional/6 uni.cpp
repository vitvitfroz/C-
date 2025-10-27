#include <iostream>
using namespace std;

int main() {
    int n;
    long long fatorial = 1;

    cout << "Digite um número inteiro: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }

    cout << "Fatorial de " << n << " é " << fatorial << endl;
    return 0;
}