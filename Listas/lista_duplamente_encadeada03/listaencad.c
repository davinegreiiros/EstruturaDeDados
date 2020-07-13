#include "listaencad.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

 

/*A lista encadaeda implementada aqui considera um nó sentinela*/

 

struct No {
    int info;
    TNo *prox;
};
   
TNo* criar(int v) {
    TNo* ptno = (TNo*)malloc(sizeof(TNo));
    ptno->info = v;
    ptno->prox = NULL;
    return ptno;
}

 

int tamanho(TNo *e) {
    if (e == NULL) return -1;
    TNo *ptaux = e->prox;
    int n = 0;
    while (ptaux != NULL){
        n = n+1;
        ptaux = ptaux->prox;
    }
    return n;
}

 

void inserir(TNo *e, int v) {
    if (e == NULL) return;
    TNo *ptaux = e;
    while (ptaux->prox != NULL) {
        ptaux = ptaux->prox;
    }
    ptaux->prox = criar(v);
}

 

void remover(TNo *e, int v){
    if (e == NULL) return;
    TNo *ptaux = e;
    while (ptaux->prox != NULL) {
        if (ptaux->prox->info == v){
            ptaux->prox = ptaux->prox->prox;
        }
        else{
            ptaux = ptaux->prox;
        }
    }
}
 
void exibe(TNo *e) {
    if (e == NULL) return;
    TNo *ptaux = e->prox;
    while (ptaux != NULL) {
        printf("%d ", ptaux->info);
        ptaux = ptaux->prox;
    }
    printf("\n");   
}

void removerMenores(TNo *e,int v){
	if (e ==NULL) return;
	TNo* ptaux = e;
	while(ptaux->prox != NULL){
		if(ptaux->prox->info < v){
			ptaux->prox = ptaux->prox->prox;
		}
		else{
			ptaux = ptaux->prox;
		}
	}
}

TNo* removerMaior(TNo *e){
	if (e ==NULL) return;
	TNo* ptaux = e;
	TNo* ptmaor = e;
	
	while(ptaux->prox !=NULL){
		if(ptaux->prox->info > ptmaior->prox->info){
			ptmaior = ptaux;
		}
		ptaux = ptaux->prox;
	}
	ptaux = ptmaior->prox;
	ptmaior->prox = ptmaior->prox->prox;
	return ptaux;
}

TNo* buscarOrdenada(TNo* e,int v){
	if (e ==NULL) return;
	TNo *ptaux = e->prox;
	while(ptaux!= NULL && ptaux->info < v){
		ptaux -> ptaux->prox;
	}
	if(ptaux !=NULL && ptaux->info == v){
		return ptaux
	}
	else NULL;
	
}

void inserirOrdenada(TNo*,int v){
	if (e ==NULL) return;
	TNo *ptaux = e;
	while(ptaux->prox != NULL && ptaux->prox->info < v){
		ptaux = ptaux->prox;	
	}
	TNo *novo = criar(v);
	novo->prox = ptaux->prox;
	ptaux->prox = novo;
}

TNo* divideLista(TNo *e){
	if (e ==NULL) return;
	TNo *ptaux = e->prox;
	TNo *ptnova = criar(-1);
	
	while(ptaux != NULL){
		if(ptaux->info % 2 == 1){
		inserir(ptnova,ptaux->info);
		}
		ptaux = ptaux->prox;
	}
	return ptaux;
}


