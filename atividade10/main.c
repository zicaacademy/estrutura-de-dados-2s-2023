
#include <stdio.h>
#include <stdlib.h>
#include "hash_table.h"

int main(){
    hash_table_put("gabriel", "843834");
    hash_table_put("joao", "4343");
    hash_table_get("gabriel");
    hash_table_contains("gabriel");
}