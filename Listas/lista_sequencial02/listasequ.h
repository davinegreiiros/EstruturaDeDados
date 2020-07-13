typedef struct Lista TLista;

TLista* criar();
int tamanho(TLista *l);
void inserir(TLista *l,int v);
int remover(TLista *l,int v);
int buscar(TLista *l, int v);
void exibe (TLista *l);

/* extras */

int removertodos(TLista *l,int v);
void inserirNoInicio(TLista *l,int v);
void removerDoInicio(TLista *l);
int comparar(TLista *l1, TLista *l2);
void inverter(TLista *l);
int maiorRecusrivo(TLista *l,int ini,int fim);
int somar_todos(TLista *l);

