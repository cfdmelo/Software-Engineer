/* DESAFIO 3: O usuário (possivelmente o professor) deverá entrar com dois valores que representam as notas de um aluno em cada bimestre, e o computador 
retornará o resultado da média desses valores (média das notas). Então, se a média for maior ou igual a 6.0 (seis), o aluno está aprovado; caso contrário, 
está reprovado.*/

#include <stdio.h>

int main (){
    int grade1 = 0;
	int grade2 = 0;
 	float average = 0.0;
 	
 	printf("Type first Grade: ");
    scanf("%d", &grade1);
    printf("Type Seconde Grade: ");
    scanf("%d", &grade2);
    
    printf("\nYour Firts grade is: %d", grade1);
	printf("\nYour Second grade is: %d", grade2);
	
	average = (grade1 + grade2) / 2;
    
    printf("\nThis avarege is equal: %.1f", average);
    
    if (average >= 6.0){
    	printf("\nApproved student!");
	}else{
		printf("\nDisapproved student!");
	}
    return 0;
}


