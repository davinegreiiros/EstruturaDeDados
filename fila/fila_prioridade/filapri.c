#include <stdio.h>
#include <stdlib.h>
#include "filapri.h"

const int TAM = 10;

struct FilaPri{
    int vetor[11];
    int qtd;
};

TFilaPri * criar(){
    TFilaPri* filapri = (TFilaPri*)malloc(sizeof(TFilaPri));
    filapri->qtd = 0;

    return filapri;
}
void corrigirSubindo(TFilaPri *filapri){
    int i = filapri->qtd;
    while (i >= 2 && filapri->vetor[i/2] < filapri->vetor[i]){
        int temp = filapri->vetor[i/2];
        filapri->vetor[i/2] = filapri->vetor[i];
        filapri->vetor[i] = temp;
        i = i/2;
    }
}

void corrigirDescendo(TFilaPri *filapri){
int j = 1;
while(2*j <= filapri->qtd){
    //f fica com o maior dentre f e f+1
    int f = 2*j;
    if(f < filapri->qtd && filapri->vetor[f] < filapri->vetor[f+1]){
        f = f+1;
    }

    if(filapri->vetor[j] >= filapri->vetor[f]){
        j = filapri->qtd; //encerra o algoritmo, pois j já é maior elemento
    }else {
        int temp = filapri->vetor[j];
       filapri->vetor[j] = filapri->vetor[f];
       filapri->vetor[f] = temp;
       j = f;
    }
    }
}

void inserir(TFilaPri *f, int v){
    if(f->qtd < TAM){
        f->qtd = f->qtd+1; //andando no vetor
        f->vetor[f->qtd] = v; //inserindo o numero
        corrigirSubindo(f);
    }
}

    int extrairMax(TFilaPri *f){
        if(f->qtd > 0){ // chegar de a quantidade é maior que 0 (verificar se esta vazio)
            int max = f->vetor[1]; //guardando o maior valor no "max"
            f->vetor[1] = f->vetor[f->qtd]; //colocar o maior elemento na ultima posição
            f->qtd = f->qtd -1; //decrementa o elemento da ultima posição(remove)
            corrigirDescendo(f);
            return max;
        }
    }

int tamanho(TFilaPri *f){
    return TAM;
}
