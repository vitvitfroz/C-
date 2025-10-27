#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Quantos elementos da sequência de Fibonacci? ";
    cin >> n;

    long long a = 0, b = 1, c;
    
    cout << "Sequência: ";
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;

    return 0;
}