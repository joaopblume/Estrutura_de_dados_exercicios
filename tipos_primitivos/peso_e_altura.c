#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


/* Escrever um programa que declare duas variáveis chamadas peso e altura. Solicite ao usuário que digite seu peso em quilos e sua altura em metros. Mostre na tela o peso do usuário em quilos e também em gramas, além da altura dele em metros e em centímetros. Obs: lembrando que, por exemplo, 64.52Kg é igual a 64520g e 1.68m é igual a 168cm. */

int main(){

float peso, altura;
printf("Tranformar peso de Kg para g, e altura de m para cm!\n");
printf("Digite seu peso em Kg: ");
scanf("%f", &peso);
printf("Digite sua altura em m: ");
scanf("%f", &altura);
printf("Peso = %.0fg\n", peso * 1000);
printf("Altura = %.0fcm\n", altura * 100);
    return 0;
}