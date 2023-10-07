#include "fila.c"
#include "pilha.c"
#include <stdio.h>

int main(int argc, char* argv[]){
    Queue minhaFila;
    inicializarFila(&minhaFila);

    enfileirar(&minhaFila, 10);
    enfileirar(&minhaFila, 20);
    enfileirar(&minhaFila, 30);

    printf("Elementos da Fila:\n");
    while (!filaVazia(&minhaFila)) {
        printf("%d ", desenfileirar(&minhaFila));
    }

    Stack minhaPilha;
    inicializarPilha(&minhaPilha);

    push(&minhaPilha, 40);
    push(&minhaPilha, 50);
    push(&minhaPilha, 60);

    printf("\nElementos da Pilha:\n");
    while (!pilhaVazia(&minhaPilha)) {
        printf("%d ", pop(&minhaPilha));
    }

    return 0;
}
