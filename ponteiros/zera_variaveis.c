/* 
Dado	o	código	abaixo,	implemente, onde	está o comentário, uma	função	que	receba	os	parâmetros	a e	
b,	e	zere	seus	valores.	Observação:	a	função	a	ser	criada	deve	zerar	os	valores	de	a e	b,	os	quais foram	criados	
na	função	main().
*/

int zera(int *pont1, int *pont2){
    *pont1 = 0;
    *pont2 = 0;
}

main() {
 int a = 10;
 int b = 20;
 printf("a: %d - b: %d\n\n", a, b);
 
 /* chamar a função nesse ponto */
 zera(&a, &b);
 printf("a: %d - b: %d", a, b);
}
