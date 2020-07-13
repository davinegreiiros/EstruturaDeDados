#include "ListaEncad.h"
#include <stddef.h>
struct No{
	int info;
	TNo *prox;
};
TNo* criar(int v){
	TNo* ptno = (TNo*)malloc(sizeof(TNo));
	ptno->info = v;
	ptno->prox = NULL;
	return ptno;
}
int tamanho(TNo *e){
	if(e == NULL) return -1;
	TNo *ptaux = e->prox;
	int n = 0;
	while(ptaux != NULL){
		n = n+1;
		ptaux = ptaux->prox;
	} 
	return n;	
}
void inserir(TNo *e,int v){
	if(e == NULL) return;
	TNo *ptaux = e;
	while(ptaux->prox != NULL){
		ptaux = ptaux->prox;
	}
	ptaux->prox = criar(v);
}
void remover(TNo *e,int v){
	if(e == NULL) return;
	TNo *ptaux = e;
	while(ptaux->prox != NULL){
		if(ptaux->prox->info == v){
		ptaux->prox = ptaux->prox->prox;	
		}
		else{
			ptaux = ptaux->prox;
		}
	}
}
TNo* buscar(TNo *e,int v){
	if(e == NULL) return;
	TNo* ptaux = e->prox;
	while(ptaux != NULL){
		if(ptaux->info == v){
			return ptaux;
		}
		else{
			ptaux = ptaux->prox;
		}
	}
}
void exibe(TNo *e){
	if(e == NULL) return;
	TNo* ptaux = e->prox;
	printf("\n");
	while(ptaux != NULL){
		printf("%d", ptaux->info);
		ptaux = ptaux->prox;
	}
	
}
void mostrarno(TNo *e){
	if(e == NULL) return;
	printf("%d \n",e->info);
}

void inserirInicio(TNo* e,int v){
	TNo *ptnovo = criar(v);
	ptnovo->prox = e->prox;
	e->prox = ptnovo;
}

void removerInicio(TNo* e){
	TNo *ptrem = e->prox;
	if(e == NULL) return;
	remover(e,ptrem->info);
	return ptrem;
	//outro modo
	if (ptrem == NULL) return NULL;
	e->prox = ptrem->prox;
}
