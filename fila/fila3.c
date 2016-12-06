#include "processo.h"
#include<stdio.h>
int filacheia(tprocesso t){
    return (t.tam>=TAMMAX);
}
int ffilavazia(tprocesso t){
    return (t.tam==0);
}
void iniciafila(tprocesso *pt){
    pt->tam=0;
    pt->com=0;
    pt->fim=-1;
}
void inserefila(tprocesso *pt,char dado){
    pt->fim=(pt->fim+1)%TAMMAX;
    pt->dados[pt->fim]=dado;
    pt->tam++;
}
int retirafila(tprocesso *pt){
    int x;
    pt->com=(pt->com+1)%TAMMAX;
    x=pt->com-1;
     pt->tam--;
    return pt->dados[x];
}
void listafila (tprocesso *pt) {
    int i,c=0;
    printf ("\nImprimindo a fila: ");
    i=pt->com;
    while(c<pt->tam) {
        printf ("%d ", pt->dados[i]);
        i=(i+1)%TAMMAX;
        c++;
    }
}
