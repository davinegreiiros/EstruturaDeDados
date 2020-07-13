#include <stdlib.h>
#include <stdio.h>
#include "fila.h"
#include "pilha.h"



int main(int argc, char** argv) {
	TFila *f1,*f2;
	TPilha *p1;
	f1 = criar();
	f2 = criar();
	p1 = criar();
	enfileirar(f1,2);
	enfileirar(f1,4);
	enfileirar(f1,6);
	enfileirar(f1,8);
	exibe(f);

	int qtd = tamanho(f1);
	int i;
	for(i=o;i<qtd;i++){
		printf("%d ",desenfileirar(f1));
	}

}

