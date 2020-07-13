#include "listasequ.h"
#include <stdio.h>
#include <stdlib.h>
const int TAM = 100;
struct Lista{
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

void inserir(TLista *l,int v){
    if(l->n == TAM ) return;
    l->vetor[l->n] = v;
    l->n = l->n+1;
}

int remover(TLista *l,int v){
    int pos = buscar(l,v);
    if(pos == -1)return -1;
    int i;
    for(i=pos+1;i<l->n;i++){
        l->vetor[i-1] = l->vetor[i];
    }
    l->n = l->n -1;
    return pos;
}

int buscar(TLista *l, int v){
int i;
for(i=0;i<l->n;i++){
    if(l->vetor[i] == v){ //Elemento encontrado
        return i;
    }
}
return -1;
}

void exibe (TLista *l){
    printf("\n");
    int i;
    for(i=0;i<l->n;i++){
        printf("%d", l->vetor[i]);
    }
}

/*extras*/
int removertodos(TLista *l,int v){
	int retorno = 0;
	int pos = buscar (l,v);
	while(pos != -1 ){
		retorno = 1;
		int i;
		for(i=pos+l;i<l->n;i++){
			l->vetor[i-1] = l->vetor[i];
		}
		l->n = l->n - 1;
		pos = buscar(l,v);
	}
	return retorno;
}

void inserirNoInicio(TLista *l,int v){
	if (l->n == TAM) return ;
	int i;
	for(i=0;i<l->n;i++){
		l->vetor[i+1] = l->vetor[i];
	}
	l->vetor[0] = v;
	l->n = l->n +1;
}

void removerDoInicio(TLista *l){
	if(l->n == 0) return;
	int i;
    for(i=1;i<l->n;i++){
        l->vetor[i-1] = l->vetor[i];
    }
    l->n = l->n -1;
}

int comparar(TLista *l1, TLista *l2){
	int i,j,qtd = 0;
	for(i=0;i<l1->n;i++){
		int e1 = l1->vetor[i];
		for(j=0;j<l2->n;j++){
			if(e1 == l2->vetor[j]){
				qtd = qtd + 1;	
			}
		}
	}
	return qtd;
}

void inverter(TLista *l){
	int i;
	for(i=0;i<l->n/2;i++){
		int temp = l->vetor[i];
		l->vetor[i] = l->vetor[l->n-i-1];
		l->vetor[n-i-1] = temp;
	}
}

int maiorRecusirvo(TLista *l,int ini,int fim){ 
	if (ini == fim ) return l->vetor[ini];
	int meio = (ini + fim)/2;
	int maioresq = maiorRecusirvo(l,ini,meio);
	int maiordir = maiorRecusirvo(l,meio+1,fim);
	if(maioresq  > maiordir) return maioresq;
	else return maiordir;	
}

ordenaBin(TLista *l,int ini,int fim){ 
	if(ini == fim)return;
	int maior = -1,posmaior;
	for(i=ini;i<fim;i++){
		if(l->vetor[i] > maior){
			maior = l->vetor[i];
			posmaior = i;
			posmaior = l->fim;
		}
	}
	ordenarbinl,ini,fim-1);
}

int somar_todos(TLista *l){
	int x,y,z;
	int tam,dois,soma;
	tam = tamanho(l);
	
	TLista *aux = criar();
	TLista *aux2 = criar();
	TLista *aux3 = criar();
	
	while (tam != 1	){
		dois = tam/2;
		for(x=0;x<dois;x++){
			aux->vetor[x] = l->vetor[x];	
		}
		for(y=0;y<dois;y++){
			aux2->vetor[y] = l->vetor[y];
		}
		for(z=0;z<dois;z++){
			int l1 = aux->vetor[z];
			int l2 = aux2->vetor[z];
			soma = l1+l2;
			aux->vetor[p] = soma;
		}
		somar_todos(aux);
		return aux->vetor[0];
	}
	
	
	
}
