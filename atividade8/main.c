#include <stdio.h>
#include <stdlib.h>
#include "lista.c"

int main(int argc, char* argv[]){

    No* n0 = no('C', NULL);
    No* n1 = no('E', NULL);
    No* n2 = no('A', no('D', no('B', no('X', no('Z', NULL)))));
    No* n3 = no('U', NULL);
    lista_inserir_no(n0, n2);
    lista_inserir_no(n0, n1);
    lista_inserir_no(n0, n3);
    lista_imprimir(n0);
    printf("\nqtd nos: %d", lista_quantidade_nos(n0));
    No* n_copia = lista_copiar(n0);
    printf("\n");
    lista_imprimir(n_copia);
    lista_concatenar(n0, n_copia);
    printf("\n");
    lista_imprimir(n0);

//funcao 1
    char valor_busca = 'C';
    if(lista_verificar_existencia(n0, valor_busca)){
        printf("O valor %c existe na lista.\n", valor_busca);
    } else {
        printf("O valor %c nao existe na lista.\n", valor_busca);
    }

//funcao 2
    printf("O valor %c ocorre %d vezes na lista.\n", valor_busca, lista_verificar_ocorrencias(n0, valor_busca));

//funcao 3
    printf("Lista Inversa: ");
    lista_imprimir_inversa(n0);
    printf("\n");

//funcao 4
    lista_inserir_no_i(n0, 2);

//funcao 5
    lista_remover_no_i(n0, 1);

//funcao 6
    lista_remover_no(n0, 'A');

//imprimindo a lista
    lista_imprimir(n0);

//liberando a memoria
     lista_liberar(n0);
     n0 = NULL;
     lista_imprimir(n0);

    exit(0);
}