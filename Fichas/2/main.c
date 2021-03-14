#include <stdio.h>

float multInt(int n, float m){
    float res=0;
    int j;
    for(j=0;j<n;j++){
        res = res+m;
    }
    return res;
}

float multInt2(int n, float m){
    float res=0;
    while(n>=1) {
        if (n % 2 == 1) {
            res = res + m;
        }
        n = n / 2;
        m = m * 2;
    }
    return res;
}

int mdc(int a, int b){
    int x;
    if(a<b) {
        x = a;
    }
    else {
        x=b;
    }
    while(a%x != 0 || b%x !=0){
        x--;
    }
    return x;
}

int mdc2(int a, int b){
    int x;
    while(a != b) {
        if (a > b) {
                a -= b;
                x = b;
            }
        else {
        b -= a;
        x = a;
    }
    }
    return x;
}

int mdc3(int a, int b){
    int res;
    while(a % b != 0 && b % a != 0) {
        if (a > b) {
            res = a % b;
            a = b;
            b = res;
        }
        else {
            res = b % a;
            b = a;
            a = res;
        }
    }
    return res;
}

int fib(int n){
    int res=0;
    if(n<2){
        res+=1;
    }
    else {
        res=fib(n-1)+fib(n-2);
    }
    return res;
}

int fib2(int n){

}

int main() {

    int n;
    float m;
    printf("inserir os valores da multiplicacao\n");
    scanf("%d %f",&n,&m);
    printf("O resultado e %f\n", multInt(n, m));

    int a;
    float b;
    printf("insira os valores da multiplicacao\n");
    scanf("%d %f",&a,&b);
    printf("O resultado e %f\n", multInt2(a, b));

    int c, d;
    printf("insira 2 valores para que se encontre o maximo divisor comum\n");
    scanf("%d %d",&c,&d);
    printf("O resultado e %d\n", mdc(c, d));

    int x, y;
    printf("insira 2 valores para que se ache o maximo divisor comum\n");
    scanf("%d %d",&x,&y);
    printf("O resultado e %d\n", mdc2(x, y));

    int w, z;
    printf("insira 2 valores pretendidos para que se ache o maximo divisor comum\n");
    scanf("%d %d",&w,&z);
    printf("O resultado e %d\n", mdc3(w, z));

    int q;
    printf("insira o valor da sequencia\n");
    scanf("%d",&q);
    printf("O valor e %d\n", fib(q));

    int r;
    printf("insira o valor da sequencia\n");
    scanf("%d",&r);
    printf("O valor e %d\n", fib2(r));

    return 0;
}