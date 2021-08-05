#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>

void clear_buffer(void)
{
     int ch;
     while((ch=getchar()) != '\n' && ch != EOF);
}


main(){
    setlocale(LC_ALL, "Portuguese");

    struct TipoProduto{
        int codigo;
        char descricao[200];
        float preco;
        char promocao;
    }p;

    
        printf("Digite o codigo do produto: ");
        scanf("%d", &p.codigo);
        clear_buffer();
        
        printf("Digite a descricao do produto: ");
        fgets(p.descricao, 200, stdin);

        printf("Digite o preco do produto: ");
        scanf("%f", &p.preco);

        printf("O produto esta em promocao? [S/N]: ");
        scanf(" %c", &p.promocao);
        

        printf("O codigo do produto eh: %d\n", p.codigo);
        printf("Descricao do produto: %s\n", p.descricao);
        printf("Preco do produto: %.2f\n", p.preco);
        if(p.promocao == 'N'){
            printf("O produto nao esta em promocao!\n");
        }else if(p.promocao == 'S'){
            printf("O produto esta em promocao!");
        }else{
            printf("O parametro de promocao esta invalido, apenas S ou N!");
        }

    return 0;
}