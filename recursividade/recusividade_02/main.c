#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fatorial(int n){
	if (n==1) return 1;
	else return n * fatorial(n-1);
}

int fib(int n){
	if (n==1 || n==2) return 1;
	else return fib(n-1) + fib(n-2);
}

int fibregular(int n){
	int ant1,ant2,atual,i;
	ant1 = 1;
	ant2 = 1;
	for(i=3;i<=n;i++){
		atual = ant1 + ant2;
		ant1 = ant2;
		ant2 = atual;
	}
	return atual;
}

int f(int n){
	if (n == 1) return 1;
	else return f(n-1) + n;
}

int impar_enesimo(int n){ //5-1
 return n==1 ? 1: impar_enesimo(n-1) + 2;
}

int fib_t(int n){ //5-2
 return n < 4 ? 1: fib_t(n-1) + fib_t(n - 2) + fib_t(n - 3);
}

int main(int argc, char *argv[]) {
	printf("%d",fib(5));
}


