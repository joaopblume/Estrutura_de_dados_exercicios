#include <stdio.h>
#include <stdlib.h>

#define MAX_LIN 3
#define MAX_COL 5

void maisVendeu();
void maisBaixas();
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
    printf("\n\n");
    maisVendeu(total_vendas);
    printf("\n\n");
    maisBaixas(total_vendas);
    return 0;
}

void maisVendeu(float matriz[MAX_LIN][MAX_COL]){
    float soma[5];
    int melhor;
    float maior = 0;
    float sum = 0;
    int i, j;
    for(i=0;i<MAX_LIN;i++){
        for(j=0;j<MAX_COL;j++){
            sum = matriz[i][j];
            soma[j] = soma[j] + sum;
        }
        
    }
    for(i=0;i<MAX_COL;i++){
        if(i==0){
            maior = soma[0];
        }else if(soma[i] > maior){
            maior = soma[i];
        }

        if(maior==soma[i]){
            melhor = i + 1;
        }
    }
    printf("O melhor vendedor foi o numero %d, com o total de R$%.2f vendidos no trimestre.", melhor, maior);
}

void maisBaixas(float matriz[MAX_LIN][MAX_COL]){
    float soma[3] = {0, 0, 0};
    int i,j;
    int pior;
    float menor;
    for(j=0;j<MAX_COL;j++){
        for(i=0;i<MAX_LIN;i++){
            soma[i] = soma[i] + matriz[i][j];
        }
    }
    for(i=0;i<MAX_LIN;i++){
        if(i==0){
            menor = soma[0];
        }else if(soma[i] < menor){
            menor = soma[i];
        }

        if(soma[i] == menor){
            pior = i+1;
        }
    }
    printf("O pior mes foi o de numero %d, com o total de R$%.2f vendidos.", pior, menor);
}