typedef struct No TNo;
  
TNo* criar(int v);
int tamanho(TNo *e);
void inserir(TNo *e, int v);
void remover(TNo *e, int v);
void exibe(TNo *e);


//exercicios

void removerMenores(TNo *e,int v);
TNo* removerMaior(TNo *e);
TNo* buscarOrdenada(TNo* e,int v);
void inserirOrdenada(TNo*,int v);
TNo* divideLista(TNo *e);
