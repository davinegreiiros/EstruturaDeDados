#include <stdio.h>
#include <stdlib.h>
#include "filapri.h"

int main(){
    TFilaPri *f = criar();
    inserir(f,14);
    inserir(f,20);
    inserir(f,2);
    inserir(f,15);
    //exibe(f);
    printf("%d\n", extrairMax(f));
    printf("%d\n", extrairMax(f));
    printf("%d\n", extrairMax(f));
    printf("%d\n", extrairMax(f));


    return 0;


}
