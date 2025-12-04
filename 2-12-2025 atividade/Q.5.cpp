#include <iostream>

int main() {
    int numeros[5];
    int soma = 0;

    std::cout << "Digite 5 numeros:\n";
    for (int i = 0; i < 5; i++) {
        std::cin >> numeros[i];
        soma += numeros[i];
    }

    double media = soma / 5.0;

    std::cout << "\nSoma = " << soma << "\n";
    std::cout << "Media = " << media << "\n";

    return 0;
}
