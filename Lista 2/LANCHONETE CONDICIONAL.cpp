#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int codigo, qtd;
    double total;

    cout << "Codigo do produto: ";
    cin >> codigo;
    cout << "Quantidade comprada: ";
    cin >> qtd;

    if (codigo == 1) total = 5.00 * qtd;
    else if (codigo == 2) total = 3.50 * qtd;
    else if (codigo == 3) total = 4.80 * qtd;
    else if (codigo == 4) total = 8.90 * qtd;
    else if (codigo == 5) total = 7.32 * qtd;

    cout << fixed << setprecision(2);
    cout << "Valor a pagar: R$ " << total << endl;

    return 0;
}
