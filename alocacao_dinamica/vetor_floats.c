#include <stdio.h>
#include <stdlib.h>

void lista_floats(float *p, int tam){
    int i=0;
    while(i<tam){
        printf("%.2f\n", *(p+i));
        i++;
    }
      
}

void le_floats(float *p, int tam){
    int i=0;
    for(i=0;i<tam;i++){
        printf("valor %d: ", i+1);
        scanf("%f", (p+i));
        fflush(stdin);
    }
} 

int main(){
    int tam;
    float *p;

    printf("Entre com o tamanho do vetor: ");
    scanf("%d", &tam);
    fflush(stdin);

    p = (float *) malloc (tam * sizeof(float));


    printf("inicio %d\n", p);

    if(p){
        le_floats(p, tam);
    }
    else{
        printf("Problema ao alocar na memoria!");
        return 0;
    }

    lista_floats(p, tam);

    free(p);


    return 0;
}