#include "lista.h"


const int TAM = 5;

struct Lista {
    int vetor[5];
    int n; //quantidade
};
   
TLista* criar() {
    TLista *lista = (TLista*)malloc(sizeof(TLista));
    lista->n = 0;
    
    return lista;
}


int tamanho(TLista *l){
    return l->n;
}


//Insere no final
void inserir(TLista *l, int v){
    if (l->n < TAM) {
        l->vetor[l->n] = v;
        l->n = l->n + 1;
    }
}
 
void exibe(TLista *l){
    int i;
    printf("\n\nQtde %d\n", l->n);
    for (i=0; i<l->n; i++){
        printf("%d ", l->vetor[i]);
    }    
}

void removerMenores(TLista *l,int v){
	int i,j;
	for(i=0;i<l->n;i++){
		if(l->vetor[i] < v){
			for(j=i;j<l->n;j++){
				l->vetor[j] = l->vetor[j+1];
			}
			l->n = l->n -1;
			i=i-1;
		}
	}
}

void removerMaior(TLista *l){
	int i,maior=0;
	
}

TLista *divideLista(TLista *l){
	TLista *novalista = criar();
	
	int i;
	for(i=0;i<l->n;i++){
		if(l->vetor[i] % 2 == 1){ //par
			inserir(novalista,l->vetor[i]);
		}
	}
	
}

int maiorRecursivo(TLista *l,int ini,int fim){
	if (ini == fim) return l->vetor[ini];
	int meio = (ini + fim)/2;
	int maioresq = maiorRecursivo(l,ini,meio);
	int maiordir = maiorRecursivo(l,meio+1,fim);
	if (maioresq > maiordir ) return maioresq;
	else return maiordir;
}

