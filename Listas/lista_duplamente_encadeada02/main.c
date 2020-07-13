#include <stdio.h>
#include <stdlib.h>
#include "ListaEncad.h"
int main(int argc, char *argv[]) {
	TNo *ptlista = criar(-1);
	inserir(ptlista,10);
	exibe(ptlista);
	
	
	return 0;
	
}
