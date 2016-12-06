#define TAMMAX 10
struct fila{
int com,fim,tam;
int dados[TAMMAX];
};
typedef struct fila tfila;
int filacheia(tfila t);
int ffilavazia(tfila t);
void iniciafila(tfila *p);
void inserefila(tfila *pt,int dado);
int retirafila(tfila *pt);
int come(tfila *pt);
void listafila (tfila *pt);
