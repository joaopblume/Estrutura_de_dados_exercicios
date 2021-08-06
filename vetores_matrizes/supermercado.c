#include <stdio.h>
#include <stdlib.h>



int main(){

int max;
int i;
void retornaProdutos();
void retornaMaisCaro();
void retornaMaisBarato();
void retornaTotal();
void retornaMedia();

printf("Digite quantos produtos queres cadastrar: ");
scanf("%d", &max);

float produtos[max];
    for(i=0;i<max;i++){
        printf("Digite o valor do produto %d: ", i + 1);
        scanf("%f", &produtos[i]);
    }

    retornaProdutos(produtos, max);
    retornaMaisCaro(produtos, max);
    retornaMaisBarato(produtos, max);
    retornaTotal(produtos, max);
    retornaMedia(produtos, max);
    return 0;
}

void retornaProdutos(float lista[], int max){
    int i;
    printf("Produtos cadastrados: \n");
    for(i=0;i<max;i++){
        printf("R$%.2f \n", lista[i]);
    }
}

void retornaMaisCaro(float lista[], int max){
    int i;
    float maisCaro;
    printf("Produto mais caro: ");
    for(i=0;i<max;i++){
        if(i==0){
            maisCaro = lista[i];
        }else{
            if(lista[i] > maisCaro){
                maisCaro = lista[i];
            }
        }
    }
    printf("R$%.2f\n", maisCaro);
}   

void retornaMaisBarato(float lista[], int max){
    int i;
    float maisBarato;
    printf("Produto mais barato: ");
    for(i=0;i<max;i++){
        if(i==0){
            maisBarato = lista[i];
        }else{
            if(lista[i] < maisBarato){
                maisBarato = lista[i];
            }
        }
    }
    printf("R$%.2f\n", maisBarato);
}

void retornaTotal(float lista[], int max){
    int i;
    float total = 0;
    printf("Valor total: \n");
    for(i=0;i<max;i++){
        total = total + lista[i];
    }
    printf("R$%.2f\n", total);
}

void retornaMedia(float lista[], int max){
    int i;
    float soma = 0;
    float media = 0;

    printf("Media dos produtos: \n");
    for(i=0;i<max;i++){
        soma = soma + lista[i];
    }

    media = soma / max;
    printf("R$%.2f\n", media);
}
