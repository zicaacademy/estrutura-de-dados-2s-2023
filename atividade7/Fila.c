
#include "fila.h"
#include <stdio.h>
#include <stdlib.h>

void inicializarFila(Queue* queue) {
    queue->front = NULL;
    queue->rear = NULL;
}

int filaVazia(Queue* queue) {
    return queue->front == NULL;
}

void enfileirar(Queue* queue, int value) {
    Node* novoNo = (Node*)malloc(sizeof(Node));
    if (novoNo == NULL) {
        printf("Erro: Falha na alocação de memória\n");
        exit(EXIT_FAILURE);
    }

    novoNo->data = value;
    novoNo->next = NULL;

    if (filaVazia(queue)) {
        queue->front = novoNo;
        queue->rear = novoNo;
    } else {
        queue->rear->next = novoNo;
        queue->rear = novoNo;
    }
}

int desenfileirar(Queue* queue) {
    if (filaVazia(queue)) {
        printf("Erro: Fila vazia\n");
        exit(EXIT_FAILURE);
    }

    int item = queue->front->data;
    Node* temp = queue->front;

    if (queue->front == queue->rear) {
        queue->front = NULL;
        queue->rear = NULL;
    } else {
        queue->front = queue->front->next;
    }

    free(temp);
    return item;
}
