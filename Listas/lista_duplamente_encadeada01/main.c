#include <stdio.h>
#include <stdlib.h>
#include "listaduplaencad.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	TNoDE *ptlista = criar(-1); //sentinela
	inserir(ptlista, 10);
	inserir(ptlista, 20);
		inserir(ptlista, 15);
			inserir(ptlista, 30);
	return 0;
}
