#include <stdio.h>      /* printf, scanf, puts */
#include <stdlib.h>     /* realloc, free, exit, NULL */
#include <string.h>

#define TAM_STR 15

int main () {
    int num = 0; int i = 0;
    char str_aux[TAM_STR];
    char **nomes;
    printf("%ld", sizeof(char*));

    printf("Quantos nomes voce necessita armazenar: ");
    scanf("%d", &num);
    fflush(stdin);
    // ALOCANDO ESPACO DE MEMORIA
    // aloca um bloco com enderecos  
    nomes = (char**) malloc (num * sizeof(char**));

    if (nomes) {
        for(i=0;i<num;i++){
            printf("Digite o nome do cliente 0%d: ",(i+1));
            scanf("%[^\n]", str_aux);
            fflush(stdin);
            nomes[i] = (char*) malloc ((strlen(str_aux)) * sizeof(char));
            strcpy(nomes[i], str_aux);
            
        } 
    }
    else
        printf("Problema ao alocar memoria");

    // LISTANDOS OS VALORES
    i = 0;
    printf ("Nomes armazenados: \n");
    while (i < num) {
        printf("Nome:\t%s\n", nomes[i]);
        i++;
    }
    for (i=0; i<num; i++)
        free(nomes[i]);
    free(nomes);
    return 0;
}