#include "fila.h"
#include<stdio.h>

int main(){
    int i;
    tfila q;
    iniciafila(&q);
    inserefila(&q,5);
    for(i=15;i<=30;i=i+5) inserefila(&q,i);
    retirafila(&q);
    for(i=35;i<=45;i=i+5) inserefila(&q,i);
    inserefila(&q,60);
    for(i=60;i<=65;i=i+5) inserefila(&q,i);
    for(i=0;i<3;i++) retirafila(&q);
    for(i=70;i<=75;i=i+5) inserefila(&q,i);
    listafila(&q);
    printf ("\n");
    return 0;
}
