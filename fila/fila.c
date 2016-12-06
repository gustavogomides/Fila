#include "fila.h"
#include<stdio.h>
int filacheia(tfila t){
    return (t.tam>=TAMMAX);
}
int ffilavazia(tfila t){
    return (t.tam==0);
}
void iniciafila(tfila *pt){
    pt->tam=0;
    pt->com=0;
    pt->fim=-1;
}
void inserefila(tfila *pt,int dado){
    pt->fim=(pt->fim+1)%TAMMAX;
    pt->dados[pt->fim]=dado;
    pt->tam++;
}
int retirafila(tfila *pt){
    int x;
    /*pt->com=(pt->com+1)%TAMMAX;
    x=pt->com-1;
     pt->tam--;
    return pt->dados[x];*/
    if (!ffilavazia(*pt)) {
        x=pt->dados[pt->com];
        pt->com=(pt->com+1)%TAMMAX;
        pt->tam--;
    }
    else return -1;
}
int come(tfila *pt) {
    return (pt->dados[pt->com]);
}
void listafila (tfila *pt) {
    int i,c=0;
    printf ("\nImprimindo a fila: ");
    i=pt->com;
    while(c<=pt->tam) {
        printf ("%d ", pt->dados[i]);
        i=(i+1)%TAMMAX;
        c++;
    }
}
