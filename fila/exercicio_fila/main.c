#include <stdlib.h>
#include <stdio.h>
#include "fila.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	TFila *f = criar();
	enfileirar(f,2); //posicao 0
	enfileirar(f,4); // posicao 1
	enfileirar(f,6); //posicao 2
	enfileirar(f,8); //posicao 3
	desenfilerar(f); //sai o 2
	enfileirar(f,10); 
	enfileirar(f,12);
	desenfilerar(f); // sai o 4
	enfileirar(f,14);
	exibe(f);
	return 0;
}

