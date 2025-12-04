#include <iostream>

int main() {
    int numeros[5];

    std::cout << "Digite 5 numeros:\n";
    for (int i = 0; i < 5; i++) {
        std::cin >> numeros[i];
    }

    std::cout << "\nValores digitados:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << numeros[i] << " ";
    }

    return 0;
}
