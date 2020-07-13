typedef struct FilaPri TFilaPri;

TFilaPri *criar();
int extrairMax(TFilaPri * f);
void inserir(TFilaPri *f,int v);
void exibe(TFilaPri *f);
int tamanho(TFilaPri *f);
int qtde(TFilaPri *f);
