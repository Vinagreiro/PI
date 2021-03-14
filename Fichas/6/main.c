#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct stack {
    int sp;
    int tamanho;
    int * valores;
} STACK;

typedef struct queue {
    int inicio, tamanho;
    int capacidade;
    int * valores;
} QUEUE;

//Exercico 1

//A
void initStack (STACK *s){
    s->sp=0;
    s->tamanho = 2;
    s->valores = malloc(s->tamanho*sizeof(int));
}

//B?????????????????????????????????????????????????????
int isEmptyS (STACK *s){
    return s->sp==0;
}

//C?????????????????????????????????????????????????????
int push (STACK *s, int x, int * val){
    int sucesso=0;
    if (s->sp == s->tamanho) {
        val = realloc(s->valores, 2*s->tamanho*sizeof(int));
        s->valores = val;
        free(val);
        s->tamanho *= 2;
        /* Versão sem realloc:
         *
         * val = malloc(2*s->capacidade*sizeof(int));
         * for (int i = 0; i < s->capacidade; i++)
         *     val[i] = s->valores[i];
         * s-> capacidade*=2;
         * s-> valores = val;
         * free(val);
         */
    }
    s->valores[s->sp++] = x;
    return sucesso;
}

//D
int pop (STACK *s, int *x){
    int sucesso=0;
    if(s->sp==0)
        sucesso=1;
    else *x = s->valores[s->sp--];//?????????????
    return sucesso;
}

//E
int top (STACK *s, int *x){
    int sucesso=0;
    if(s->sp==0)
        sucesso=1;
    else *x = s->valores[s->sp];//??????????????
    return sucesso;
}

//Exercicio 2

//A
void initQueue (QUEUE *q){
    q->tamanho=0;
    q->inicio=0;
    q->capacidade=2;
}

//B
int isEmptyQ (QUEUE *q) {
    return q->tamanho==0;
}

//C???????????????????????????????????????????????????????????????
int enqueue (QUEUE *q, int x, int * val){
    int sucesso=0;
    int i, j;
    if (q-> tamanho == q-> capacidade) {
        for (i = q-> inicio, j = 0; i < q->capacidade; i++, j++)
            val[j] = q->valores[i];

        for (i = 0; i < q->inicio; i++, j++)
            val[j] = q->valores[i];

        q->valores = val;
        free(val);
        q->capacidade *= 2;
    }

    q->valores[(q->inicio +q->tamanho++)%q->capacidade] = x;

    return sucesso;
}

//D
int dequeue (QUEUE *q, int *x) {
    int sucesso = 0;

    if (q->tamanho == 0)
        sucesso = 1;
    else
        *x = q->valores[q->inicio++];

    return sucesso;
}

//E
int front (QUEUE *q, int *x) {
    int sucesso = 0;

    if (q->tamanho == 0)
        sucesso = 1;
    else
        *x = q->valores[q->inicio];

    return sucesso;
}

int main() {
    return 0;
}