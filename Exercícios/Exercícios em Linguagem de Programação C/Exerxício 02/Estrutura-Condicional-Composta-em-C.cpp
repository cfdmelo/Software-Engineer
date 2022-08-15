/* DESAFIO 2 - Construa um algoritmo que receba como entradas a idade do cliente e a classificação indicativa dos filmes que ele pretende locar
e verifique se o mesmo possa alocar filmes de acordo com sua idade */

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
    
    if (age < movieRating){
    printf("\nThis film is not indicated for your age group");
	}else {
	printf ("\nThis film is indicated for your age group");
	}
	
    return 0;
}


