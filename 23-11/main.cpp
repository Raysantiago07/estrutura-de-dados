#include <iostream>
using namespace std;

struct No {
    int chave;
    No* esq;
    No* dir;
};

struct ArvoreBin {
    No* raiz;
};

// Pre-ordem: Raiz -> Esquerda -> Direita
void preOrdem(No* no){
    if(no == NULL) return;

    cout << (no->chave) << " ";
    preOrdem(no->esq);
    preOrdem(no->dir);
}

void imprimir_preOrdem(ArvoreBin* arv){
    cout << "Pre-ordem: ";
    preOrdem(arv->raiz);
    cout << endl;
}

// EM-ORDEM: Esquerda -> Raiz -> Direita
void emordem(No* no){
    if(no == NULL) return;

    emordem(no->esq);
    cout << (no->chave) << " ";
    emordem(no->dir);
}

void imprimir_emOrdem(ArvoreBin* arv){
    cout << "Em-ordem: ";
    emordem(arv->raiz);
    cout << endl;
}

// POS-ORDEM: Esquerda -> Direita -> Raiz
void posOrdem(No* no){
    if(no == NULL) return;

    posOrdem(no->esq);
    posOrdem(no->dir);
    cout << (no->chave) << " ";
}

void imprimir_posOrdem(ArvoreBin* arv){
    cout << "Pos-ordem: ";
    posOrdem(arv->raiz);
    cout << endl;
}

int main(){
    ArvoreBin* arv = new ArvoreBin();

    No* no1 = new No();
    no1->chave = 1;
    no1->esq = NULL;
    no1->dir = NULL;

    No* no76 = new No();
    no76->chave = 76;
    no76->esq = NULL;
    no76->dir = NULL;

    No* no55 = new No();
    no55->chave = 55;
    no55->esq = NULL;
    no55->dir = NULL;

    No* no21 = new No();
    no21->chave = 21;
    no21->esq = NULL;
    no21->dir = NULL;

    No* no34 = new No();
    no34->chave = 34;
    no34->esq = NULL;
    no34->dir = NULL;

    arv->raiz = no1;
    no1->esq = no76;
    no1->dir = no55;
    no76->esq = no34;
    no76->dir = no21;

    imprimir_preOrdem(arv);
    imprimir_emOrdem(arv);
    imprimir_posOrdem(arv);
}