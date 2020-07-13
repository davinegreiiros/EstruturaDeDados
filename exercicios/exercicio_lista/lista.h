typedef struct Lista TLista;

TLista* criar();
int tamanho(TLista *l);
void inserir(TLista *l,int v);
int remover(TLista *l,int v);
int buscar(TLista *l, int v);
void exibe (TLista *l);

