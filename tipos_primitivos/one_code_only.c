#include <stdio.h>
#include <stdlib.h>

void imprimeTabelaASCII();
void peso_e_altura();
void octalhexadecimal();
void descompactadormp3();

int main(){

    int choice;

    printf("Escolha um exercicio: \n");
    printf("1 - Imprimir tabela ASCII.\n");
    printf("2 - Ver seu peso e altura em cm/m e kg/g.\n");
    printf("3 - Numero em octal e hexadecimal.\n");
    printf("4 - Descompactador de mp3.\n");
    scanf("%d", &choice);

    switch(choice){
        case 1:
        imprimeTabelaASCII(); 
        break;
        case 2:
        peso_e_altura();
        break;
        case 3:
        octalhexadecimal();
        break;
        case 4:
        descompactadormp3();
        break;
        default:
        printf("Opcao invalida!");
    }

    return 0;
}

void imprimeTabelaASCII(){
    int i;

    for(i=0;i<255;i++){
        if(i % 10 == 0){
            printf("\n");
        }
        printf("%d = %c \t", i ,i);
    }
}

void peso_e_altura(){
    float peso, altura;

    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);

    printf("Digite sua altura em m: ");
    scanf("%f", &altura);

    printf("Seu peso = %fkg = %fg", peso, peso * 1000);
    printf("Sua altura = %fm = %fcm", altura, altura * 100);
}

void octalhexadecimal(){
    int num;

    printf("Digite um número: ");
    scanf("%i", &num);

    printf("%d em octal: %o\n", num, num);
    printf("%d em hexadecimal: %x\n", num, num);
}

void descompactadormp3(){
    float arquivo;
    float raw;
    float kb, gb, b, tb;

    printf("Tamanho do arquivo mp3 em MB: ");
    scanf("%f", &arquivo);

    raw = arquivo * 12;
    kb = raw * 1024;
    b = kb * 1024;
    gb = raw / 1024;
    tb = gb / 1024;

    printf("Arquivo original possui o tamanho de %.4f MB.\n", raw);
    printf("Arquivo original possui o tamanho de %.4f KB.\n", kb);
    printf("Arquivo original possui o tamanho de %.4f GB.\n", gb);
    printf("Arquivo original possui o tamanho de %.4f B.\n", b);
    printf("Arquivo original possui o tamanho de %.4f TB.\n", tb);
}