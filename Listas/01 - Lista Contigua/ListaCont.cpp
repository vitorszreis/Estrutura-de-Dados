#include "ListaCont.h"

ListaCont::ListaCont(int cap) {
    capacidade = cap;
    tamanho = 0;
    elementos = new int[cap]; // Aloca espaço para os elementos
}

ListaCont::~ListaCont() {
    delete[] elementos; // Libera a memória alocada
}

bool ListaCont::troca(int posicao1, int posicao2) {
    // Implementar a função troca aqui
    // Retornar true se a troca for bem-sucedida, false caso contrário
}

bool ListaCont::aumentaCapacidade(int novoMax) {
    // Implementar a função aumentaCapacidade aqui
    // Retornar true se a capacidade for aumentada com sucesso, false caso contrário
}