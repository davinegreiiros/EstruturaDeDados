#include <stdlib.h>
#include <stdio.h>
#include "fila.h"
const int TAM = 5;

struct Fila{
	int vetor[5];
	int ini,fim,qtd; //ini - indice posicao inicial, fim - indice posicao final
};

TFila* criar(){
	TFila* fila = (TFila*)malloc(sizeof(TFila));
	fila->ini = -1;
	fila->fim = -1;
	fila->qtd = 0;
	
	return fila;
}
void enfileirar(TFila * f,int v){ //se fim+1 = inicio -> fila cheia
	if(!((f->fim+1) % TAM == f->ini)){ 
		if(f->ini == -1) f->ini = 0;
		f->fim = (f->fim+1) % TAM;
		f->vetor[f->fim] = v;
		f->qtd = f->qtd + 1;	
	}
}

int desenfilerar(TFila * f){
	int d = -1; //fila vazia = -1
	if (f->ini > -1){ //fila > -1 = desenfileirar
		d = f->vetor[f->ini]; // d = posicao inicial
		if(f->ini == f->fim) f-> ini = f->fim = -1;
		else f->ini = (f->ini+1) %TAM;
		f->qtd = f->qtd -1;
	}
	return d;
}

void exibe(TFila * f){
	int i,ind;
	ind = f->ini;
	printf("Inicio: %d\n", f->ini);
	printf("Fim %d\n", f->fim);
	for(i=0; i<f->qtd; i++){
		printf("%d ",f->vetor[ind]);
		ind = (ind + 1) %TAM;
	}
}



void inverter(TFila *fila){
	TPilha *aux = criar();
	int i;
	for(i=0;i < tamanho(f);i++){
		empilhar(aux,desempilhar(f));
		enfileirar(f,desempilhar(aux));
	}
}



