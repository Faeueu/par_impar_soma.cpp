#include <iostream>
using namespace std;

int main() {
    int somaPar = 0;
    int somaImpar = 0;
    int num;

    while (true) {
        cout << "Digite um numero inteiro positivo: ";
        cin >> num;

        if (num > 1000) {
            break;
        }

        if (num % 2 == 0) {
            somaPar += num;
        } else {
            somaImpar += num;
        }
    }

    cout << "Soma dos numeros pares: " << somaPar << "\n";
    cout << "Soma dos numeros impares: " << somaImpar << "\n";

    return 0;
}
