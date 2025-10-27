#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double preco, dinheiro;
    int quantidade;
    
    cout << "Preco unitario do produto: " << endl ;
    cin >> preco;
    cout << "Quantidade comprada: " << endl ;
    cin >> quantidade;
    cout << "Dinheiro recebido: " << endl ;
    cin >> dinheiro;
    
    double troco = dinheiro - (preco * quantidade);
    cout << fixed << setprecision(2);
    cout << "TROCO = " << troco << endl;
    
    return 0;
}