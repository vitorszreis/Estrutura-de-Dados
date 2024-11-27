#include <iostream>
#include "ListaCont.h"

int main() {
    ListaCont lista(10); // Cria uma lista com capacidade 10

    // Teste da função troca
    if (lista.troca(0, 1)) {
        std::cout << "Troca realizada com sucesso." << std::endl;
    } else {
        std::cout << "Troca não pôde ser realizada." << std::endl;
    }

    // Teste da função aumentaCapacidade
    if (lista.aumentaCapacidade(20)) {
        std::cout << "Capacidade aumentada com sucesso." << std::endl;
    } else {
        std::cout << "Capacidade não pôde ser aumentada." << std::endl;
    }

    return 0;
}