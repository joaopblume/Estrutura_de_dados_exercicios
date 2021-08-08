#include <stdio.h>
#include <stdlib.h>

#define MAX_LIN 3
#define MAX_COL 5
int main(){

    
    float total_vendas[MAX_LIN][MAX_COL];
    int i, j; 

    for(i=0;i<MAX_LIN;i++){
    
        for(j=0;j<MAX_COL;j++){
            printf("Digite um valor para [%d][%d]: ", i, j);
            scanf("%f", &total_vendas[i][j]);
        }
    }

    // printando a matriz em formato matricial

    for (i=0;i<MAX_LIN; i++){
        printf("\n");
        for (j=0;j <MAX_COL;j++){
          printf("%8.2f", total_vendas[i][j]);
        }
    }

    return 0;
}}