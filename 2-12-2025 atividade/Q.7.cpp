#include <iostream>

int main() {
    int v[10];
    int x, pos = -1;

    std::cout << "Digite 10 numeros:\n";
    for (int i = 0; i < 10; i++) {
        std::cin >> v[i];
    }

    std::cout << "Digite o valor de X: ";
    std::cin >> x;

    for (int i = 0; i < 10; i++) {
        if (v[i] == x) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        std::cout << "X nao esta no vetor.\n";
    } else {
        std::cout << "X encontrado na posicao " << pos << "\n";
    }

    return 0;
}
