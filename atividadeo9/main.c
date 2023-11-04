
#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


int main(){
    list *sortedList = createList();
    list *unsortedList = createList();

    FILE *csvFile = fopen("1kk_rand_float.csv", "r");

    if(csvFile == NULL){
        printf("CSV file null\n");
        return -1;
    }

    float valueRead = 0;

    do{
        fscanf(csvFile, "%f", &valueRead);
        printf("Reading : %.2f\n", valueRead);
        insertValue(valueRead, unsortedList);
        insertSorted(sortedList, valueRead);
    }while(!feof(csvFile));


    fclose(csvFile);

} 