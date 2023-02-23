#include "lista.h"

Lista *criaNo(int valor){
    
    Lista *novo = malloc(sizeof(Lista));

    if(novo == NULL){
        perror("ERRO NO MALLOC!\n");
        exit(1);
    }

    else{
        novo->chave = valor;
        novo->proximo = NULL;
    }

    return novo;
}

Lista *insereInicio(Lista *L, int valor){
    
    Lista *novo = criaNo(valor);
    novo->proximo = L;
    L = novo;
    return L;

}

Lista *insereFinal(Lista *L, int valor){

    Lista *novo = criaNo(valor);
    Lista *aux = L;

    if(L == NULL){
        L = novo;
    }
    
    else{
        while(aux->proximo != NULL){
            aux = aux->proximo;
        }
        aux->proximo = novo;
    }

    return L;
}

Lista *buscaChave(Lista *L, int valor){

    Lista *aux = L;

    while(aux != NULL){
        if(aux->chave == valor){
            break;
        }
        else{
            aux = aux->proximo;
        }
    }
    
    return aux;
}

Lista *excluiInicio(Lista *L){
    
    if(L != NULL){
        Lista *aux = L;
        L = L->proximo;
        free(aux);
    }
    
    return L;
}

void imprimeLista(Lista *L){

    Lista *aux = L;
    int cont = 1;

    while(aux != NULL){
        printf("Posicao: %i\t Valor: %i\n", cont, aux->chave);
        aux = aux->proximo;
        cont++;
    }
}