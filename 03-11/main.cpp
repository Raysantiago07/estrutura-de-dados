#include <iostream>
using namespace std;

struct No {
    int chave;
    No* prox;
};

struct fila_encadeada {
    No* cabeca;
    No* cauda;
};

bool inserir(fila_encadeada* f; int chave){
    No* novo = new No();
    novo->chave = chave;
    novo->prox = NULL;
    if(f->cabeca == NULL){
        f->cabeca = novo;
        f->cauda = novo;
        return true;
    }

    f->cauda->prox = novo;
    f->cauda = novo;
    return true;
}
