const char * table[26];

void initializeTable();
const char* hash_table_get(char* chave);
void hash_table_put(char* chave, char* dado);
int hash_table_contains(char* chave);
void hash_table_remove(char* chave);
int getIndex(char *chave);