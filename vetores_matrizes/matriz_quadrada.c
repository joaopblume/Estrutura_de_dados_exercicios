#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void geraMatrizAleatoria();
void escreveMatriz();
int descobreMaiorNumero();

int main () {
 srand(time(NULL));
 int n;
 printf("Qual o tamanho da matriz quadrada? ");
 scanf("%d", &n);
 int matriz[n][n];
 geraMatrizAleatoria(n, matriz);
 escreveMatriz(n, matriz);
 printf("\n");
 printf("%d", descobreMaiorNumero(n, matriz));
 return 0;
}

void geraMatrizAleatoria(int n, int matriz[n][n]){
    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            matriz[i][j] = rand() % 10;
        }
    }
}

void escreveMatriz(int n, int matriz[n][n]){
    int i,j;
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("  %d  ", matriz[i][j]);
        }
    }
}

int descobreMaiorNumero(int n, int matriz[n][n]){
    int i,j;
    int maior = -1;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
            }
        }
    }
    return maior;
}