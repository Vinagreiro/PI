#include <stdio.h>
#include <math.h>

//exercicio 1

//a) 1 1 4
//   2 2 6
//   3 3 8
//   4 4 10
//   5 5 12

//exercicio 2

//b) 13

void swapM(int *x, int *y){
    int t=*x;
    *x=*y;
    *y=t;
}

void swap(int v[20], int i, int j){
    int x, y;
    x=v[i];
    v[i]=v[j];
    v[j]=x;
    for(y=0;y<20;y++){
        printf("%d", v[y]);
    }
    putchar('\n');
}

int soma(int v[], int N){
    int i, res=0;
    for(i=0;i<N;i++){
        res+= v[i];
    }
    return res;
}

int maximum(int v[], int N, int *m){
    int i, x=0;
    for(i=0;i<N;i++){
        if(x<v[i]){
            x=v[i];
        }
    }
    *m=x;
    return 0;
}

void quadrados(int q[], int N){
    int i, x=1;
    for(i=0;i<N;i++){
        q[i]= x*x;
        printf("%d", q[i]);
        x++;
    }
    putchar('\n');
}

int main() {

    int v[20] = {1,2,3,4,5,6,7,7,8,9,0,4,2,5,1,8,9,2,3,0};

    int x, y;
    printf("introduza o valor das variaveis que quer trocar\n");
    swapM(&x, &y);
    printf ("%d %d\n", x, y);

    int i, j;
    printf("introduza o valor das posicoes que quer trocar\n");
    scanf("%d %d", &i, &j);
    swap(v, i, j);

    int m;
    printf("introduza numero de posicoes que quer somar\n");
    scanf("%d", &m);
    printf("O resultado da soma e: %d\n", soma(v,m));

    int q[1024], n;
    printf("introduza o tamanho do array\n");
    scanf("%d", &n);
    quadrados(q, n);

    return 0;
}