#include <stdlib.h>
#include <stdio.h>

typedef struct slist *LInt;

typedef struct slist {
    int valor;
    LInt prox;
} Nodo;

//Exercicio 1 A
/*
 * LInt a;
a = malloc(sizeof(Nodo));
a -> valor =10;
a -> prox = malloc(sizeof(Nodo));
a -> prox -> valor = 5;
a -> prox -> prox = malloc(sizeof(Nodo));
a -> prox -> prox -> valor = 15;
a -> prox -> prox -> prox = NULL;
*/

//Exercicio 1 B

//i
LInt cons (LInt l, int x){
    LInt aux;
    aux = malloc(sizeof(Nodo));
    aux -> valor = x;
    aux -> prox = l;
    l = aux;
    return l;
}


//ii
LInt tail (LInt l){
    LInt aux;
    aux=l;
    l=l->prox;
    free(aux);
    return l;
}

//iii
LInt init (LInt l){
    LInt aux=l;
    while(l!=NULL && l->prox != NULL)
        l = l->prox;
    free(l);
    l = aux;
    return l;
}

//iv
LInt snoc (LInt l, int x){
    LInt aux = l;
    LInt novo = malloc(sizeof(Nodo));
    novo -> valor = x;
    if(l==NULL){
        novo -> prox = NULL;
        l = novo;
    }
    else{
        while(l -> prox != NULL){
            l = l -> prox;
        }
        novo -> prox = NULL;
        l -> prox = novo;
    }
    l=aux;
    return l;
}

//v
LInt concat (LInt a, LInt b){
    LInt aux=a;
    if(a==NULL){
        a=b;
    }
    else{
        while(a -> prox != NULL){
            a = a ->prox;
        }
        a -> prox = b;
    }
    a=aux;
    return a;
}

//Exercicio 2

//A
typedef struct aluno * Turma;

typedef struct aluno {
    char nome[60];
    int  numero;
    int nota;
    struct aluno * prox;
} Aluno;

//B
int acrescentaAluno (Turma *t, Aluno a){
    int sucesso=0, i;
    Turma novo = malloc(sizeof(struct aluno));
    for(i=0;a.nome[i]!='\0';i++)
        novo -> nome[i] = a.nome[i];
    novo -> nome[i]='\0';
    novo -> numero = a.numero;
    novo -> nota = a.nota;
    if(t==NULL){
        t=&novo;
    }
    else{
        while((*t) -> prox != NULL){
            *t = (*t) -> prox;
        }
        (*t) -> prox = novo;
        (*t) = (*t) -> prox;
        (*t) -> prox = NULL;
    }
    return sucesso;
}

//C
Aluno *procura (Turma t, int numero){
    Aluno * aux = t;
    while(t -> numero != numero && t != NULL){
        t = t -> prox;
        aux = t;
    }
    if(aux -> numero != numero)
        aux = NULL;
    return aux;
}

//D
int quantosPassaram (Turma t){
    int res=0;
    while(t != NULL){
        if(t -> nota >= 10){
            res++;
        }
        t = t -> prox;
    }
}

int main() {
    return 0;
}