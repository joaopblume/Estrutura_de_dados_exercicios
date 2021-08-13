#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>

#define MAXPROD 10

 struct TipoProduto{
        int codigo;
        char descricao[60];
        float preco;
        char promocao;
    };

int leProduto (struct TipoProduto prod[]);
void mostraProduto(int total, struct TipoProduto prod[]);

int main(){
    int quantidade;
    struct TipoProduto produtos[MAXPROD];
    quantidade = leProduto(produtos);
    mostraProduto(quantidade, produtos);
    return 0;
}
// struct TipoProduto é o tipo que será retornado da função.
int leProduto (struct TipoProduto prod[]){
    char continuar = 'S';
    int i = 0;
    do{
        printf("Codigo do produto: ");
        scanf("%d", &prod[i].codigo);
        fflush(stdin);
        printf("Descricao do produto: ");
        // sempre que tiver um vetor/matriz, já existe o endereço de onde ele inicia na memória, 
        // então não é necessário usar o & ao dar scanf. No caso a descricao é um vetor.
        scanf("%[^\n]", prod[i].descricao);
        fflush(stdin);
        printf("Preco do produto: ");
        scanf("%f", &prod[i].preco);
        fflush(stdin);
        printf("O produto esta em promocao? [S/N]: ");
        scanf("%c", &prod[i].promocao);
        fflush(stdin);
        printf("Continuar? [S/N]: ");
        scanf("%c", &continuar);
        i++;
    }while(continuar == 'S' && i<MAXPROD);
    return i;
}

void mostraProduto(int total, struct TipoProduto prod[]){
    int i;
    for(i=0;i<total;i++){
        printf("Valores do produto: \n");
        printf("Codigo: %d\n", prod[i].codigo);
        printf("Descricao: %s\n", prod[i].descricao);
        printf("Preco: %.2f\n", prod[i].preco);
        printf("Promocao: %c\n", prod[i].promocao);
        printf("\n");
    } 
}