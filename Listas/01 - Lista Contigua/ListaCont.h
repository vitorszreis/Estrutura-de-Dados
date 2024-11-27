#ifndef LISTACONT_H
#define LISTACONT_H

class ListaCont {
private:
    int* elementos; // ponteiro para os elementos da lista
    int capacidade; // capacidade máxima da lista
    int tamanho; // número atual de elementos na lista

public:
    ListaCont(int cap);
    ~ListaCont();
    bool troca(int posicao1, int posicao2);
    bool aumentaCapacidade(int novoMax);
    
};

#endif