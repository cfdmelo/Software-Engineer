/* DESAFIO 6: Ordem Decrescente e Maior número */

#include <stdio.h>

int main (){
	int number;
	int value1;
	int value2;
	
	printf("\nTyper number 1: ");
	scanf("%d", &value1);
	printf("\nType number 2: ");
	scanf("%d", &value2);
	
	if (value1 >= value2)
	printf("\nOrdem Decrescente: \n1)%d \n2)%d \nMaior Numero: %d", value1, value2, value1);
	else
	printf("\nOrdem Decrescente: \n1)%d \n2)%d \nMaior Numero: %d", value2, value1, value2);
}
