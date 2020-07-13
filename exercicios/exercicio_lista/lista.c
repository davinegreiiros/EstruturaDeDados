#include "lista.h"
#include <stdio.h>
#include <stdlib.h>
const int TAM = 100;
struct Lista {
	int vetor[100];
	int n;
};

TLista* criar(){
	TLista* nova = (TLista *)malloc(sizeof(TLista));
	nova->n = 0;
	return nova;
}

int tamanho(TLista *l){
	return l->n;
}

void inserir(TLista *l, int v){
	if (l->n == TAM) return;
	l->vetor[l->n] = v;
	l->n = l->n + 1;
}

int buscar(TLista *l, int v){
	int i;
	for(i=0;i<l->n;i++){
		if (l->vetor[i] == v){ //Achou
			return i;
		}
	}

	return -1;
}

int remover(TLista *l, int v){
	int pos = buscar(l, v);
	if (pos == -1) return -1;
    int i;
    for (i=pos+1;i<l->n;i++){
    	l->vetor[i-1] = l->vetor[i];
	}
	l->n = l->n - 1;
	return pos;
}

void exibe(TLista *l) {
	printf("\n");
	int i;
	for(i=0;i<l->n;i++){
		printf("%d ", l->vetor[i]);
	}
}
