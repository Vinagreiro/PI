#include <stdio.h>

//Questao 1
void insere(int v[], int N, int x){
    int i;
    for(i=N;i>0 && v[i-1]>x;i--){
        v[i] = v[i-1];
    }
    v[i]=x;
}

//Questao 2
void iSort(int v[], int N){
    int i, j, guarda;
    for(i=1;i<N;i++){
        for(j=0;j<i;j++){
            if(v[j] > v[i]){
                guarda = v[j];
                v[j] = v[i];
                v[i] = guarda;
            }
        }
    }
}

//Questao 3
int maxInd(int v[], int N){
    int valor=v[0], i, indice=0;
    for(i=1;i<N;i++){
        if(v[i]>valor){
            valor=v[i];
            indice=i;
        }
    }
    return indice;
}

//Questao 4
void maxIndOrd(int v[], int N){
    int i, guarda, maior;
    for(i=N-1;i>0;i--){
        maior=maxInd(v, i+1);
        guarda=v[i];
        v[i]=v[maior];
        v[maior]=guarda;
    }
}

//Questao 5
void maxIndOrdDois(int v[], int N){
    int i, j, maior, guarda;
    for(i=N-1;i>0;i--){
        maior=0;
        for(j=1;j<=i;j++){
            if(v[j]>v[maior])
                maior=j;
        }
        guarda=v[i];
        v[i]=v[maior];
        v[maior]=guarda;
    }
}

//Questao 6
void swap(int v[], int i, int j){
    int guarda;
    guarda=v[i];
    v[i]=v[j];
    v[j]=guarda;
}
void bubble(int v[], int N, int* a){
    int i, trocas=0;
    for(i=1;i<N;i++){
        if(v[i]<v[i-1]){
            swap(v, i-1, i);
            trocas=1;
        }
        if(trocas==0)
            *a = 1;
    }
}

//Questao 7 e 8
void bubbleSort (int v[], int N){
    int i, a=0;
    for(i=N;i>0 && a==0;i--)
        bubble(v, i, &a);
    printf("o A é: %d\n", a);
}

//Questao 9
void merge (int r[], int a[], int na, int b[], int nb){
    int i=0, j=0, k=0;
    while(i<na && j<nb){
        if(a[i]<b[j])
            r[k++]=a[i++];
        else r[k++]=b[j++];
    }
    if(i==na) {
        for (; j < nb; j++)
            r[k++] = b[j];
    }
    else {
        for(;i<na;i++)
            r[k++]=a[i];
    }
}

//Questao 10?????????????????????????????????????????????
int partition (int v[], int a, int b){
    int i=1, j=a, k=b-a;
    int r[b-a+1];
    while(k!=j){
        if(v[i]>v[0])
            r[k--]=v[i++];
        else
            r[j++]=v[i++];
    }
    r[k]=v[0];
    for(j=0;j<b-a;j++){
        v[j]=r[j];
    }
    return k;
}



int main() {
    return 0;
}