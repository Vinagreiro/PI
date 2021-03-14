#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <memory.h>

//Exercicio 1
int minusculas(char s[]){
    int i, conta=0;
    for(i=0;s[i] != '\0';i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]+=32;
            conta+=1;
        }
    }
    return conta;
}

//Exercicio 2
int contalinhas(char s[]){
    int i, conta=0;
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='\n'){
            conta+=1;
        }
    }
    return conta;
}

//Exercicio 3
int contaPal(char s[]){
    int i, conta=0;
    for(i=0;s[i]!='\0';i++){
        if(s[i]==' '){
            conta+=1;
        }
    }
    return conta;
}

//Exercicio 4
int procura(char *p, char *ps[], int N){
    int i, k=-1;
    for(i=0;i < N;i++){
        if(strcmp(ps[i],p)==0)
            k=i;
    }
    return k;
}

//Exercicio 5
int procuraord(char *p, char *ps[], int N){
    int i, k=-1;
    for(i=0;i < N && (strcmp(ps[i],p)!= 1);i++){
        if(strcmp(ps[i],p)==0 && i<N)
            k=i;
    }
    return k;
}

//Exercicio 6
int procurabin(char *p, char *ps[], int N){
    int m, k=-1;
    if(N==0) k=-1;
    else {
        m = N / 2;
        if (strcmp(ps[m], p) == 0) k = m;
        else if (strcmp(ps[m], p) == 1) k = procurabin(p, ps, m);
        else {
            k=procurabin(p,&ps[m+1],N-m-1);
            if(k != -1) k=k+m+1;
        }
    }
    return k;
}

//Exercicio 7
int zeros(int N, int M, int m [N][M]){
    int a, b, contador=0;
    for(a=0;a<N;a++){
        for(b=0;b<M;b++){
            if(m[a][b]==0){
                contador+=1;
            }
        }
    }
    return contador;
}

//Exercicio 8
void identidade(int N, int m[N][N]){
    int i, j;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(i==j){
                m[N][N]=1;
            }
            else m[N][N]=0;
        }
    }
}

//Exercicio 9

int main() {
    return 0;
}