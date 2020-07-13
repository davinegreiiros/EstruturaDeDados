typedef struct NoDE TNoDE;

TNoDE* criar(int v);
int tamanho(TNoDE *l);
void inserir(TNoDE *l,int v);
void remover(TNoDE *l,int v);
int buscar(TNoDE *l,int v);
void exibe(TNoDE *l);
void exibeno(TNoDE *l)
