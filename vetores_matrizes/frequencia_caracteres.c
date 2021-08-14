#include <stdio.h>
#include <stdlib.h>
// tamanho maximo da minha string
#define TAMVET 30
// tamanho da tabela ASCII, assim pode-se usar qualquer caractere da tabela
#define TAMFREQ 127

/* Leia uma string do teclado com no máximo 30 caracteres. Posteriormente, analise essa string e crie um vetor (ou matriz) de frequências dos caracteres existentes na string.
Ao final imprima essa frequência dos caracteres. */

int main(){
    int i;
    char string[TAMVET];
    // duas linhas: uma para alocar a letra no vetor, outra para definir a frequencia da letra.
    char frequencia[2][TAMFREQ];
    // iniciando a matriz
    for(i=0; i<TAMFREQ;i++){
        frequencia[0][i] = '\0';
        frequencia[1][i] = 0;
    }

    printf("Digite uma string de no maximo 30 caracteres: ");
    scanf("%[^\n]", string);


    // lendo a string e armazenando os dados
    for(i=0; i<TAMVET && string[i] != '\0';i++){
        //string[i] == um caracter da tabela ASCII, logo pode retornar uma posição da tabela
        frequencia[0][string[i]] = string[i];
        frequencia[1][string[i]]++;
    }

    //imprimindo
    for(i=0;i<TAMFREQ;i++){
        if(frequencia[1][i] >= 1){
            printf("%c = %d\n", frequencia[0][i], frequencia[1][i]);
        }
    }
    return 0;
}