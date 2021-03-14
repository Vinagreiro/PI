#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

//1
int maiorSeq(){
    int agora, maior=0;
    scanf("%d", &agora);
    while(agora != 0){
        if(agora > maior){
            maior=agora;
        }
        scanf("%d", &agora);
    }
    return maior;
}

//2
int mediaa(){
    int agora, res=0, quant=0;
    scanf("%d", &agora);
    while(agora != 0){
        quant++;
        res+=agora;
        scanf("%d", &agora);
    }
    res/=quant;
    return res;
}

//3
int segundosm(){
    int maior=0, niban=0, agora;
    scanf("%d", &agora);
    while(agora != 0){
        if(agora>maior){
            niban=maior;
            maior=agora;
        }
        scanf("%d", &agora);
    }
    return niban;
}

//4
int bitsUm(int n){
    int conta=0;
    while(n != 0){
        if(n%2==1) {
            conta++;
        }
        n/=2;
    }
    return conta;
}

//5
int trailinZ(int n){
    int conta=0;
    while(n%2==0){
        conta++;
        n/=2;
    }
    return conta;
}

//6
int qDig(int n){
    int conta=0;
    while(n != 0){
        conta++;
        n/=10;
    }
    return conta;
}

//7
char *stracat(char s1[], char s2[]){
    int i, j;
    for(i=0;s1[i]!='\0';i++){}
    for(j=0;s2[j]!='\0';j++){
        s1[i]=s2[j];
        i++;
    }
    s1[i]='\0';
    return s1;
}

//8
char *mystrcpy (char *dest, char source[]){
    int i;
    for(i=0;dest[i]!='\0';i++){
        source[i]=dest[i];
    }
    source[i]='\0';
    return source;
}

//9
int mystrcmp (char p1[], char p2[]) {
    int i, res=10;

    for (i = 0;res==10;i++) {
        if (p1[i] == '\0' && p2[i] == '\0') {
            res=0;
        }
        if (p1[i] != '\0' && p2[i] == '\0') {
            res=1;
        }
        if (p1[i] == '\0' && p2[i] != '\0') {
            res=-1;
        }
        if (p1[i] > p2[i]) {
            res=1;
        }
        if (p2[i] > p1[i]) {
            res=-1;
        }
    }
    return res;
}

//10
char *mystrstr (char s1[], char s2[]){
    int i, tamanho=strlen(s2);
    char *pos=NULL;
    if (s1[0] == '\0' && s2[0] == '\0'){
        pos=s1;
    }
    for(i=0;s1[i]!='\0' && pos==NULL;i++){
        if(strncmp(&s1[i],s2,tamanho)==0){
            pos=&s1[i];
        }
    }
    return pos;
}

//11
void strrev (char s1[]){
    int i, tamanho=strlen(s1)-1;
    char guarda;
    for(i=0;i<tamanho;i++){
        guarda=s1[i];
        s1[i]=s1[tamanho];
        s1[tamanho]=guarda;
        tamanho--;
    }
}
void strrev2 (char s1[]){
    int i, j;
    char guarda;
    for(j=0;s1[j]!='\0';j++){}
    j--;
    for(i=0;i<j;i++,j--){
        guarda=s1[i];
        s1[i]=s1[j];
        s1[j]=guarda;
    }
}

//12
void strnoV (char s[]){
    int i, j;
    for(i=0;s[i]!='\0';i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            for(j=i;s[j]!='\0';j++){
                s[j]=s[j+1];
            }
            i--;
        }
    }

}

//13
void truncW(char t[], int n){
    int i, j, conta=0;
    for(i=0;t[i]!='\0';i++){
        if(t[i]==' '){
            conta=0;
        }
        else if(conta==n){
                for(j=i;t[j]!='\0';j++){
                    t[j]=t[j+1];
                }
                i--;
        }
        else{
            conta++;
        }
    }
}

//14
char charMaisfreq(char s[]){
    int v[200]={0};
    int i, tamanho=0;
    for(i=0;s[i]!='\0';i++){
        v[s[i]]++;
    }
    char c = v[0];
    for(i=0;i<200;i++){
        if(v[i]>tamanho){
            tamanho=v[i];
            c=i;
        }
    }
    return c;
}

//15
int iguaisConsecutivos(char s[]){
    int contador=0, i, maximo=0;
    char c;
    for(i=0, contador=1;s[i]!='\0';i++){
        if(s[i]==c){
            contador++;
        }
        else{
            if(contador>maximo){
                maximo=contador;
            }
            contador=1;
            c=s[i];
        }
    }
    if(contador>maximo && contador > 1)
        maximo=contador;
    return maximo;
}

//16 ??????????????????????????????????????????????????????????????'

//17
int maiorPrefixo (char s1 [], char s2 []) {
    int i=0, contador=0;
    while(s1[i]==s2[i]){
        contador++;
        i++;
    }
    return contador;
}

//18
int maiorSufixo(char s1[], char s2[]){
    int contador=0, i, j;
    for(i=0;s1[i]!='\0';i++){}
    for(j=0;s2[j]!='\0';j++){}
    i--;
    j--;
    while(s1[i]==s2[j]){
        contador++;
        i--;
        j--;
    }
    return contador;
}

//19
int sufPref(char s1[], char s2[]){
    int contador=0, i, j=0;
    for(i=0;s1[i]!='\0';i++){
        if(s1[i]==s2[j]){
            contador++;
            j++;
        }
        else{
            contador=0;
            j=0;
        }
    }
    return contador;
}

//20
int contaPal(char s[]){
    int i, res=0;
    char c=' ';
    for(i=0;s[i]!='\0';i++){
        if(isspace(s[i]) == 0 && c==' '){
            res++;
        }
        c = s[i];
    }
    return res;
}

//21
int contaVogais(char s[]){
    int i, conta=0;
    for(i=0;s[i]!='\0';i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            conta++;
        }
    }
    return conta;
}

//22
int contida(char a[], char b[]){
    int i, j=0, res=1;
    for(i=0;a[i]!='\0' && res==1;i++){
        while(a[i]!=b[j]){
            if(b[j]=='\0'){
                res=0;
            }
            j++;
        }
        j=0;
    }
    return res;
}

//23
int palindroma(char s[]){
    int i, j=0, par=0, res=0;
    for(i=0;s[i]!='\0';i++){}
    i--;
    if(i%2 == 1)
        par=1;
    if(par==1){
        while(s[i]==s[j]){
            i--;
            j++;
        }
        if(i==j){
            res=1;
        }
    }
    if(par==0){
        while(s[i]==s[j]){
            i--;
            j++;
        }
        if(i<j){
            res=1;
        }
    }
    return res;
}

//24
int remRep(char x[]){
    int res=0, i, j;
    char c=' ';
    for(i=0;x[i]!='\0';i++){
        if(c==x[i]){
            for(j=i;x[j]!='\0';j++){
                x[j]=x[j+1];
            }
            i--;
        }
        else{
            res++;
        }
        c=x[i];
    }
    return res;
}

//25
int limpaEspacos (char t[]){
    int i, j, res=0;
    char c=' ';
    for(i=0;t[i]!='\0';i++){
        if(t[i]==' ' && c== ' '){
            for(j=i;t[j]!='\0';j++){
                t[j]=t[j+1];
            }
            i--;
        }
        else{
            res++;
        }
        c=t[i];
    }
    return res;
}

//26
void insere(int v[], int N, int x){
    int i;
    for(i=N;i>0 && v[i-1]>x;i--){
        v[i]=v[i-1];
    }
    v[i]=x;
}

//27
void merge (int r [], int a[], int b[], int na, int nb){
    int i, j=0 ,k=0;
    for(i=0;j<na && k<nb;i++){
        if(a[j]<b[k]){
            r[i]=a[j++];
        }
        else{
            r[i]=b[k++];
        }
    }
    if(j==na){
        for(;k<nb;k++){
            r[i++]=b[k];
        }
    }
    else{
        for(;j<na;j++){
            r[i++]=a[j];
        }
    }
}

//28
int crescente (int a[], int i, int j){
    int res=1 ,x;
    for(x=i;x<j && res==1;x++){
        if(a[x]>a[x+1]){
            res=0;
        }
    }
    return res;
}

//29
int retiraNeg (int v[], int N){
    int res=0, i, j;
    for(i=0;i<N;i++){
        if(v[i]<0){
            for(j=i;j<N;j++){
                v[j]=v[j+1];
            }
            i--;
            N--;
        }
        else{
            res++;
        }
    }
    return res;
}

//30
int menosFreq (int v[], int N){
    int i, conta=0, maior=(N+1), agora=v[0], res=-1;
    for(i=0;i<N;i++){
        if(agora==v[i]){
            conta++;
        }
        else{
            if(conta<maior){
                maior=conta;
                res=agora;
            }
            conta=1;
        }
        agora = v[i];
    }
    if(conta<maior){
        res = agora;
    }
    return res;
}

//31
int maisFreq (int v[], int N){
    int i, contador=0, maior=0, agora=v[0], res=-1;
    for(i=0;i<N;i++){
        if(agora==v[i]){
            contador++;
        }
        else{
            if(contador>maior){
                maior=contador;
                res=agora;
            }
            contador=1;
        }
        agora=v[i];
    }
    if(contador>maior){
        res=agora;
    }
    return res;
}

//32
int maxCresc (int v[], int N){
    int i, agora=v[0], contador=0, maior=0;
    for(i=0;i<N;i++){
        if(v[i]>=agora){
            contador++;
        }
        else{
            if(contador>maior){
                maior=contador;
            }
            contador=1;
        }
        agora=v[i];
    }
    if(contador>maior){
        maior=contador;
    }
    return maior;
}

//33
int elimRep (int v[], int N){
    int i, j, k, tam=N;
    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(v[i]==v[j]){
                tam--;
                for(k=j;k<N;k++){
                    v[k]=v[k+1];
                    N--;
                    j--;
                }
            }
        }
    }
    return tam;
}

//34
int elimRepOrd (int v[], int N){
    int i, j, tam=N, agora=v[0]-1;
    for(i=0;i<N;i++){
        if(v[i]==agora){
            for(j=i;j<N;j++){
                v[j]=v[j+1];
            }
            N--;
            i--;
        }
        agora=v[i];
    }
    return N;
}

//35
int comunsOrd (int a[], int na, int b[], int nb){
    int i, j, contador=0;
    for(i=0,j=0;i<na && j<nb;i++){
        if(a[i]>b[j]){
            for(;b[j]<a[i] && j<nb;j++){}
            if(a[i]==b[j]){
                contador++;
                j++;
            }
        }
        else if(a[i]==b[j]){
            contador++;
            j++;
        }
    }
    return contador;
}

//36
int comuns (int a[], int na, int b[], int nb){
    int i, j, contador=0;
    for(i=0,j=0;i<na;i++){
        for(j=0;j<nb;j++){
            if(a[i]==b[j]){
                contador++;
                break;
            }
        }
    }
    return contador;
}

//37
int minInd (int v[], int N){
    int i, res=0, numero=v[0];
    for(i=0;i<N;i++){
        if(v[i]<numero){
            numero=v[i];
            res=i;
        }
    }
    return res;
}

//38
void somasAc (int v[], int Ac [], int N){
    int i, j, soma;
    for(i=0;i<N;i++){
        soma=0;
        for(j=0;j<=i;j++){
            soma+=v[j];
        }
        Ac[i]=soma;
    }
}

//39
int triSup (int N, float m [N][N]){
    int i, j, res=1;
    for(i=0;i<N;i++){
        for(j=0;i<N;j++){
            if(i>j && m[i][j]!=0){
                res=0;
            }
        }
    }
    return res;
}

//40
void transposta (int N, float m [N][N]){
    int i, j, antes;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            antes=m[i][j];
            m[i][j]=m[j][i];
            m[j][i]=antes;
        }
    }
}

//41
void addTo (int N, int M, int a [N][M], int b[N][M]){
    int i, j;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            a[i][j]+=b[i][j];
        }
    }
}

//42
int unionSet (int N, int v1[N], int v2[N], int r[N]){
    int i, contador=0;
    for(i=0;i<N;i++){
        if(v1[i]==1 || v2[i]==1){
            contador++;
            r[i]=1;
        }
    }
    return contador;
}

//43
int intersectSet (int N, int v1[N], int v2[N], int r[N]){
    int i, contador=0;
    for(i=0;i<N;i++){
        if(v1[i]==1 && v2[i]==1){
            contador++;
            r[i]=1;
        }
    }
    return contador;
}

//44
int intersectMSet (int N, int v1[N], int v2[N], int r[N]){
    int i, contador=0;
    for(i=0;i<N;i++){
        if(v1[i]>v2[i]){
            r[i]=v2[i];
        }
        else{
            r[i]=v1[i];
        }
        contador++;
    }
    return contador;
}

//45
int unionMSet (int N, int v1[N], int v2[N], int r[N]){
    int i, contador=0;
    for(i=0;i<N;i++){
        r[i]=v1[i]+v2[i];
        contador++;
    }
    return contador;
}

//46
int cardinalMSet (int N, int v[N]){
    int i, contador=0;
    for(i=0;i<N;i++){
        contador+=v[i];
    }
    return contador;
}

typedef enum movimento {Norte, Oeste, Sul, Este} Movimento;
typedef struct posicao {
    int x, y;
} Posicao;

//47
Posicao posFinal (Posicao inicial, Movimento mov[], int N){
    int i;
    for(i=0;i<N;i++){
        switch(mov[i]){
            case Norte: inicial.y++;
            break;
            case Sul: inicial.y--;
            break;
            case Este: inicial.x++;
            break;
            case Oeste: inicial.x--;
            break;
        }
    }
    return inicial;
}

//48
int caminho (Posicao inicial, Posicao final, Movimento mov[], int N){
    int i, res=-1;
    for(i=0;i<=N;i++){
        if(inicial.y > final.y){
            mov[i]=Sul;
            inicial.y--;
        }
        if(inicial.y < final.y){
            mov[i]=Norte;
            inicial.y++;
        }
        if(inicial.x > final.x){
            mov[i]=Oeste;
            inicial.x--;
        }
        if(inicial.x < final.x){
            mov[i]=Este;
            inicial.x++;
        }
        if(inicial.x == final.x && inicial.y == final.y){
            res=i;
        }
    }
    return res;
}

//49
int maisCentral (Posicao pos[], int N){
    int i, central=0;
    float dist = sqrt(pos[0].x * pos[0].x + pos[0].y * pos[0].y);
    for(i=0;i<N;i++){
        if (dist > sqrt(pos[i].x*pos[i].x + pos[i].y*pos[i].y)) {
            dist = sqrt(pos[i].x*pos[i].x + pos[i].y*pos[i].y);
            central = i;
        }
    }
    return central;
}

//50
int vizinhos (Posicao p, Posicao pos[], int N){
    int i, contador=0;
    for(i=0;i<N;i++){
        if(p.x==pos[i].x && p.y==pos[i].y){}
        else if(sqrt((p.x - pos[i].x)*(p.x - pos[i].x) + (p.y - pos[i].y)*(p.y - pos[i].y)) <= 1){
            contador++;
        }
    }
    return contador;
}


int main() {
    return 0;
}