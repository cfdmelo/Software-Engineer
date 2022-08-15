// DESAFIO 7 Faça um programa que declare 3 alturas sem ocupar muito espaço de memória Linguagem de Programação C //

# include <stdio.h>

int main(){

	float height[3] = {1.65, 1.80,2.0};
	float height1[3];
	
	printf("\n1° Height: %.2f", height[0]);
	printf("\n2° Height: %.2f", height[1]);
	printf("\n3° Height: %.2f", height[2]);
	
	height1[0] = 1.65;
	height1[1] = 1.80;
	height1[2] = 2.0;
	
	printf("\n1° Height1: %.2f", height1[0]);
	printf("\n2° Height1: %.2f", height1[1]);
	printf("\n3° Height1: %.2f", height1[2]);
	
	return 0;
	
}
