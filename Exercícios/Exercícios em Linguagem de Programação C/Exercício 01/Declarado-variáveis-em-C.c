// DESAFIO 1 - Construa um algoritmo que receba como entradas a idade do cliente e a classificação indicativa dos filmes que ele pretende locar.

#include<stdio.h>

int main (){
    int age = 0;
    int movieRating = 0;

 	printf("Whats is your age? ");
    scanf("%d", &age);
    printf("Whats is the Movie Rating? ");
    scanf("%d", &movieRating);
    
    printf("\nAge: %d", age);
	printf("\nMovie Rating: %d", movieRating);
	
    return 0;
}


