#include <stdio.h>
#include <stdlib.h>



typedef struct celula {
int dado;
struct celula *prox;
} celula;
/*
celula *inicializa(){
    celula *p;
    p=malloc(sizeof(celula));
    if(p==NULL) exit(EXIT_FAILURE);
    p->prox=NULL;
    return p;
}
*/
int empilha (celula *p, int x){
    celula *novo=malloc(sizeof(celula));
    if(novo!=NULL){ 
    novo->dado=x;
    novo->prox=p->prox;
    p->prox=novo;
    return 1;
    }
    else return 0;
}