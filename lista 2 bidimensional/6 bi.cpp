#include <iostream>
using namespace std;

int main() {
    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int diagPrincipal = 0, diagSecundaria = 0;

    for (int i = 0; i < 3; i++) {
        diagPrincipal += matriz[i][i];
        diagSecundaria += matriz[i][2-i];
    }

    cout << "Diagonal principal: " << diagPrincipal << endl;
    cout << "Diagonal secundária: " << diagSecundaria << endl;

    return 0;
}