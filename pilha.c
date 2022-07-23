#include <stdio.h>
#include <stdlib.h>

struct Node{
    struct Node* proximo;
    int valor;
};

struct Pilha{
    struct Node* topo;
    int tamanho;
};

struct Pilha* criar(){
    struct Pilha* nova_pilha = (struct Pilha*) malloc(sizeof(struct Pilha));
    if(nova_pilha!=NULL){
        nova_pilha->topo = NULL;
        nova_pilha->tamanho = 0;
    }

    return nova_pilha;
}

void empilhar(struct Pilha* p,int valor){
    struct Node* novo_no = (struct Node*) malloc(sizeof(struct Node));
    novo_no->proximo = p->topo;
    p->topo = novo_no;
    novo_no->valor = valor;
    p->tamanho++;
}

void exibirPilha(struct Pilha* p){
    struct Node* aux = (struct Node*)malloc(sizeof(struct Node));
    aux = p->topo;
    for(int i=0;i<p->tamanho;i++){
        printf("%d ", aux->valor);
        aux = aux->proximo;
    }
}

void main(){
    struct Pilha* p = criar();
    empilhar(p,7);
    empilhar(p,4);
    empilhar(p,5);
    empilhar(p,3);
    int tamanho = p->tamanho;
   
    exibirPilha(p);
}