
#ifndef FILA_H
#define FILA_H

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct {
    Node* front;
    Node* rear;
} Queue;

void inicializarFila(Queue* queue);
int filaVazia(Queue* queue);
void enfileirar(Queue* queue, int value);
int desenfileirar(Queue* queue);

#endif
