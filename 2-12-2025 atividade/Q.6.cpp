#include <iostream>

int main() {
    int v[8];
    int maior, menor;
    int posMaior = 0, posMenor = 0;

    std::cout << "Digite 8 numeros:\n";
    for (int i = 0; i < 8; i++) {
        std::cin >> v[i];
    }

    maior = v[0];
    menor = v[0];

    for (int i = 1; i < 8; i++) {
        if (v[i] > maior) {
            maior = v[i];
            posMaior = i;
        }
        if (v[i] < menor) {
            menor = v[i];
            posMenor = i;
        }
    }

    std::cout << "\nMaior valor: " << maior << " na posicao " << posMaior << "\n";
    std::cout << "Menor valor: " << menor << " na posicao " << posMenor << "\n";

    return 0;
}
