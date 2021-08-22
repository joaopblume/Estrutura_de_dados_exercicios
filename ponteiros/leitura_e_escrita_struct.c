#include <stdlib.h>
#include <stdio.h>

struct tipoProduto{
    int codigo;
    char descricao[20];
};

void leitura(struct tipoProduto *p, int qtd);
void escrita(struct tipoProduto *p, int qtd);

int main(){
    int qtd = 3;
    struct tipoProduto *p;
    struct tipoProduto vetor[3];

    p = vetor;

    leitura(p, qtd);
    escrita(p, qtd);

    return 0; 
    
}

void leitura(struct tipoProduto *p, int qtd){
    int i;
    for(i=0;i<qtd;i++){
        printf("Codigo do produto: ");
        scanf("%d", &(p+i)->codigo);
        fflush(stdin);
        printf("Descricao do produto: ");
        scanf("%[^\n]", &(p+i)->descricao);
        fflush(stdin);
    }
}

void escrita(struct tipoProduto *p, int qtd){
    int i;
    for(i=0;i<qtd;i++){
        printf("Codigo: %d\t Descricao: %s\t\n", p->codigo, p->descricao);
        p++;
    }
}