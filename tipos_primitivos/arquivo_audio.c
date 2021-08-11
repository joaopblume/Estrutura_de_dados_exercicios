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

    return 0;
}