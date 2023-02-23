#ifndef LISTA_H
#define LISTA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <errno.h>

typedef struct lista{//cria uma estrutura do tipo lista e coloco seus dados, como se trata
//de lista simplesmente encadeada, colocamos um ponteiro do tipo lista apontando para o
//proximo elemento.

    int chave; //vai receber o conteúdo.
    struct lista *proximo; //aponta para o proximo elemento.

}Lista;

Lista *criaNo(int valor); //função responsável por criar um nó na lista e atribuir seus valores
//inicias de acordo com a estrutura lista.

Lista *insereInicio(Lista *L , int valor); //função responsável por inserir um nó no inicio da lista
//recebendo a lista e o valor que será inserido, ela utiliza da função *criaNo para inicializar a inserção. 

Lista *insereFinal(Lista *L , int valor); //função responsável por inserir um nó no final da lista
//usa a mesma lógica da função *insereInicio.

Lista *buscaChave(Lista *L , int valor); //função responsável por percorrer toda a lista e retornar um determinado
//nó, onde utiliza de um auxiliar para fazer o laço durante a execução.

Lista *excluiInicio(Lista *L); //função responsável por excluir o primeiro elemento da lista.

Lista *excluiFinal(Lista *L); //função responsável por excluir o último elemento da lista.

Lista *excluiChave(Lista *L,int valor); //função responsável por percorrer toda a lista e excluir um determinado
//nó, onde utiliza de um auxiliar para fazer o laço durante a execução.

void  imprimeLista(Lista *L); //função responsável por imprimir a lista.

/*Lista *bucaChaveOrd(Lista *L,int valor);
Lista *insereOrd(Lista *L,int valor);
Lista *excluiChaveOrd(Lista *L,int valor);
*/

#endif