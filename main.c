#include "lista.h"

int main(void){

    Lista *L = NULL;

    printf("INICIO DA LISTA...\n");
    L = criaNo(10);
    imprimeLista(L);

    L = insereInicio(L, 20);
    printf("\nVAMOS INSERIR ALGUNS ELEMENTOS NA LISTA: \n");
    printf("\nINSERIMOS NO INICIO... 20\n");
    imprimeLista(L);

    L = insereFinal(L, 35);
    printf("\nINSERIMOS NO FINAL... 35\n");
    imprimeLista(L);

    L = insereFinal(L, 2);
    printf("\nINSERIMOS NO FINAL... 2\n");
    imprimeLista(L);

    L = insereInicio(L, 1);
    printf("\nINSERIMOS NO INICIO... 1\n");
    imprimeLista(L);

    L = insereFinal(L, 100);
    printf("\nINSERIMOS NO FINAL... 100\n");
    imprimeLista(L);

    L = insereInicio(L, 55);
    printf("\nINSERIMOS NO INICIO... 55\n");
    imprimeLista(L);

    printf("\nVAMOS INSERIR ALGUNS ELEMENTOS E DEPOIS IMPRIMOS A LISTA: \n\n");

    L = insereInicio(L, 78);
    L = insereInicio(L, 85);
    L = insereInicio(L, 1000);
    L = insereInicio(L, 578);
    L = insereFinal(L, 100000);
    L = insereFinal(L, 212354);
    L = insereFinal(L, 111125);
    L = insereFinal(L, 5987);

    printf("\nO QUE TEMOS NA LISTA AGORA...\n\n");
    imprimeLista(L);

    return 0;
}