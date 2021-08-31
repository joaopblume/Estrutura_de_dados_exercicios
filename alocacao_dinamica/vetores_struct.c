#include <stdlib.h>
#include <stdio.h>


struct aluno{
    int matricula;
    char nome[30];
    float media;
};


void lista_floats(struct aluno *p, int tam){
    int i=0;
    while(i<tam){
        printf("matricula: %d\n", p->matricula);
        printf("nome: %s\n", p->nome);
        printf("media: %.2f\n", p->media);
        p++;
        i++;
    }
      
}

void le_floats(struct aluno *p, int tam){
    int i=0;
    for(i=0;i<tam;i++){
        printf("matricula: ");
        scanf("%d", &(p+i)->matricula);
        fflush(stdin);
        printf("nome: ");
        scanf("%s", (p+i)->nome);
        fflush(stdin);
        printf("media: ");
        scanf("%f", &(p+i)->media);
        fflush(stdin);

    }
} 




int main(){
    int tam;
    struct aluno *p;

    printf("Entre com a quantidade de alunos que deseja cadastrar: ");
    scanf("%d", &tam);
    

    p = (struct aluno *) malloc(tam * sizeof(struct aluno));

    printf("inicio %d\n", p);

    if(p){
        le_floats(p, tam);
    }
    else{
        printf("Problema ao alocar espaco na memoria!!!");
        return 0;
    }

    lista_floats(p, tam);

    free(p);
    return 0;
}