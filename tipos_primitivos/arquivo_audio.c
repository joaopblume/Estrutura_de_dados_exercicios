#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
     Sabe-se que um arquivo de som, no formato mp3
comprime o som original em até 12 vezes. Pergunte ao 
usuário, qual o tamanho (em MB) de seu arquivo de som 
predileto, considerando que ele sofreu o máximo de 
compressão (12 vezes). Responda qual o tamanho do 
arquivo original em MB? KB? B? GB? TB? Mostre os 
valores em seu formato normal e em seu formato 
exponencial.

*/
main(){

    int arquivo;
    int raw;

    printf("Tamanho do arquivo mp3 em MB: ");
    scanf("%d", &arquivo);

    raw = arquivo * 12;

    printf("Arquivo original possui o tamanho de %d MB.\n", raw);
    printf("Arquivo original possui o tamanho de %d KB.\n", raw * 1024);
    printf("Arquivo original possui o tamanho de %d GB.\n", raw / 1024);
    printf("Arquivo original possui o tamanho de %d B.\n", raw * 1000000);
    printf("Arquivo original possui o tamanho de %d TB.\n", raw / 1000000);




    return 0;
}