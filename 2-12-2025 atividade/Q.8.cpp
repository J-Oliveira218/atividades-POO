#include <iostream>
#include <string>

int main() {
    std::string nomes[6];
    std::string busca;
    bool encontrado = false;

    std::cout << "Digite 6 nomes:\n";
    for (int i = 0; i < 6; i++) {
        std::cin >> nomes[i];
    }

    std::cout << "Digite um nome para buscar: ";
    std::cin >> busca;

    for (int i = 0; i < 6; i++) {
        if (nomes[i] == busca) {
            encontrado = true;
            break;
        }
    }

    if (encontrado) {
        std::cout << "Nome encontrado no vetor!\n";
    } else {
        std::cout << "Nome NAO encontrado.\n";
    }

    return 0;
}
