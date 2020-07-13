#include "conta.h"


struct Conta TConta{

float valorsaldo;
float valoremprestimo;

};

TConta * criar(float valorinicial){

    TConta *c = malloc(sizeof(Conta));
    c->valoremprestimo = 0;
    c->valorsaldo = valorinicial;
}

void pedirEmprestimo(TConta *c,float v){
    c->valoremprestimo +=  v;
}

void pagarEmprestimo(TConta *c,float valor){
       c->valoremprestimo -= valor;
}

void depositar(TConta *c,float x){
    if(c->valoremprestimo > 0 ){
      c->valoremprestimo -= x;
    }else{
        c->valorsaldo += x;
        }
}
void sacar(TConta *c, float y){
    c->valorsaldo -= y;
    if(c->valorsaldo < 0){
        c->valorsaldo += y - c->valorsaldo;
        c->valoremprestimo += y - c->valorsaldo;
    }

}
