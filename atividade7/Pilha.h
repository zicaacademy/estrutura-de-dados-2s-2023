
#ifndef PILHA_H
#define PILHA_H

typedef struct {
    int* items;
    int top;
} Stack;

void inicializarPilha(Stack* stack);
int pilhaVazia(Stack* stack);
int pilhaCheia(Stack* stack);
void push(Stack* stack, int value);
int pop(Stack* stack);

#endif
