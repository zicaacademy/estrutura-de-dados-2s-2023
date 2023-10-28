
#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>

void inicializarPilha(Stack* stack) {
    stack->items = (int*)malloc(sizeof(int) * 100); 
    if (stack->items == NULL) {
        printf("Erro: Falha na alocação de memória\n");
        exit(EXIT_FAILURE);
    }
    stack->top = -1;
}

int pilhaVazia(Stack* stack) {
    return stack->top == -1;
}

int pilhaCheia(Stack* stack) {
    return stack->top == 99; 
}

void push(Stack* stack, int value) {
    if (pilhaCheia(stack)) {
        printf("Erro: Pilha cheia\n");
        exit(EXIT_FAILURE);
    }
    stack->items[++stack->top] = value;
}

int pop(Stack* stack) {
    if (pilhaVazia(stack)) {
        printf("Erro: Pilha vazia\n");
        exit(EXIT_FAILURE);
    }
    return stack->items[stack->top--];
}
