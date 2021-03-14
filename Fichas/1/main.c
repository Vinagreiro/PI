#include <stdio.h>
//EXERCICIO 1---

//exercicio 1
// output = 12 16

//exercicio 2
// output = 0 1

//exercicio 3
// output = A 65; B 66 2 50; @ 114;

//exercicio 4
// output = 100 200

//exercicio 5
// output = 128 73; 129 73

//EXERCICIO 2---

//exercicio a
// output = 3 5

//exercicio b
// output = 11 66

//exercicio c
// output = ...

//exercicio d
// output = _#_#_#_#_#_#_#_#_#_#

//exercicio e
// output = abcdefg
//          bcdefg
//          cdefg
//          defg
//          efg
//          fg
//          g

//exercicio f
// output = 0
//          1
//          01
//          11
//          001
//          101
//          011
//          111
//          0001
//          1001
//          0101
//          1101
//          0011
//          1011
//          0111
//          1111

//EXERCICIO 3---

//exercicio 2

    void quadrado (int l) {
        int i,j;

        for (i = 0; i < l; i++) {
            for (j = 0; j < l; j++) {
                putchar('#');
            }
            putchar('\n');
        }
        putchar('\n');
    }

//exercicio 3
    void xadrez(int l) {
        int i,j;

        for (i = 0; i < l; i++) {
            for (j = 0; j < l; j++) {

                if ((j+i)%2 == 0) {
                    putchar('#');
                } else {
                    putchar('_');
                }
            }
            putchar('\n');
        }
        putchar('\n');
    }

//exercicio 4
    void triangulo (int alt) {
        int i,j;

        for (i = 1; i < (alt*2); i++) {
            if (i <= alt) {
                for (j = 0; j < i; j++) {
                    putchar('#');
                }
            } else {
                for (j = 0; j < ((alt*2) - i); j++) {
                    putchar('#');
                }
            }
            putchar('\n');
        }
        putchar('\n');
    }

    void trianguloH (int alt) {
        int i,j;

        for (i = 0; i< alt; i++) {
            for (j = 0; j < (alt - i); j++) {
                putchar(' ');
            }
            for (j = 0; j < ((i * 2) + 1); j++) {
                putchar('#');
            }
            putchar('\n');
        }
        putchar('\n');
    }

    int main() {
        int n;
        scanf("%d" ,&n);
        quadrado(n);

        int a;
        scanf("%d" ,&a);
        xadrez(a);

        int b;
        scanf("%d" ,&b);
        triangulo(b);

        int c;
        scanf("%d" ,&c);
        trianguloH(c);

        return 0;
    }