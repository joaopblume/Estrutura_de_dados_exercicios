#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*Solicitar ao usuário um número qualquer e mostrar o 
valor correspondente nas bases octal e hexadecimal*/

int main(){
    int num;

    printf("Digite um número: ");
    scanf("%i", &num);

    printf("%d em octal: %o\n", num, num);
    printf("%d em hexadecimal: %x\n", num, num);

        return 0;
}