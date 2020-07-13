#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "listaduplaencad.h"

struct NoDE {
    int info;
    TNoDE *prox;
    TNoDE *ant;
};

TNoDE* criar(int v){
    TNoDE *ptno = (TNoDE *)malloc(sizeof(TNoDE));
    ptno->info = v;
    ptno->prox = NULL;
    ptno->ant = NULL;
    
    return ptno;
}

int tamanho(TNoDE *l){
	if (l == NULL) return -1;
	TNoDE *ptaux = l->prox;
	int n = 0;
	while ptaux != NULL){
		n = n +1;
		ptaux = ptaux->prox;
	}
	return n;
}

void inserir(TNoDE *l,int v){
	if (l == NULL) return -1;
	TNoDE *ptaux = l->prox;
	while ptaux->prox != NULL){
		ptaux = ptaux->prox;
	}
	TNoDE *ptnovo = criar(v);
	ptaux->prox = ptnovo;
	ptnovo->ant = ptaux;
}

void exibeno(TNoDE *l){
	printf("%d", l->info);
}

int buscar(TNoDE *l,int v){
	if(l == NULL) return NULL;
	TNoDE *ptaux = l->prox;
	while ptaux != NULL){
		if(ptaux->info == v)return ptaux;
		ptaux = ptaux->prox;
	}
	return NULL;
}

void remover(TNoDe *l,int v){
	if(l == NULL) return -1;
	TNoDe *ptaux = l->prox;
		while ptaux != NULL){
		if (ptaux->info == v){ //achando valor
			ptautx->prox->ant = ptaux->prox;
			if(ptaux->prox !=NULL ) ptaux->prox->ant = ptaux->ant;
			free(ptaux);
			return;
		}
		ptaux = ptaux->prox;
	}	
}

void exibe(TNoDE *l){
	if (l == NULL) return;
	TNoDE *ptaux = l->prox;
	while ptaux != NULL){
		printf("%d", ptaux->info);
		ptaux = ptaux->prox;
	}
}


TNo* removerNaPosicao (TNo* no, int v){
	int cont = 0;

	if (no == NULL) return NULL;

	TNo* listaAuxiliar = no;

	while (cont <= v) {
		if (listaAuxiliar->prox == NULL) {			
			return NULL;
		}

		listaAuxiliar = listaAuxiliar->prox;
		contador++;
	}

	if (listaAuxiliar->proximo == NULL) {
		listaAuxiliar->ant->prox = NULL;
		free(listaAuxiliar);
	}
	else {
		listaAuxiliar->ant->prox = listaAuxiliar->prox;
		listaAuxiliar->prox->ant = listaAuxiliar->ant;
		free(listaAuxiliar); //limpando a lista
	}

	return NULL;
}
void inserirNaPosicao(TNo* no, int valor, int posicao) {
	int cont = 0;

	if (no == NULL) return;

	TNo* listaAuxiliar = no;

	while (cont < posicao) {		
		listaAuxiliar = listaAuxiliar->prox;
		contador++;
	}

	TNo* novoElemento = criar(valor);

	if (listaAuxiliar->prox != NULL) novoElemento->prox = listaAuxiliar->prox;
	if (listaAuxiliar->prox != NULL) listaAuxiliar->prox->anterior = novoElemento;

	listaAuxiliar->prox = novoElemento;
	novoElemento->ant = listaAuxiliar;
}

void removerTodos(TLista* lista, int v) {
	int qtdElementos = lista->quantidade, i;
	int posicaoValorEncontrado = buscar(lista, valor);
 
	while(posicaoValorEncontrado != -1){		
 
		for (index = posicaoValorEncontrado + 1; i < qtdElementos; i++) {
			lista->vetor[i - 1] = lista->vetor[i];			
		}
		lista->quantidade--;
		posicaoValorEncontrado = buscar(lista, valor);
	}
}


int compararlistas(TLista* lista, TNo* no) {
	TNo* aux = no;
	int posicaoListaDE = 0, 
	int cont = 0;
	int qtdelementos = lista->qtd, i;
 
	while (aux->proximo != NULL) {
		aux = aux->prox;				
 
		for (i = 0; i < qtdelementos; i++) {
			if (i == posicaoListaDE) {
				if (lista->vetor[i] == aux->info) {
					cont++;
					posicaoListaDE++;
				}
			}
		}		
	}
 
	if (cont == qtdelementos) {
		return 1;
	}else {
		return 0;
	}
}



void tornarCircular(TNo* no) {
	TNo* listaAux = no;
	TNo* sentinela = no;
 
	while (listaAux != NULL) {
		listaAux = listaAux->prox;
		if (listaAux->prox == NULL) {
			listaAux->prox = sentinela;
			sentinela->ant = listaAux;
			break;
		}
	}
}
