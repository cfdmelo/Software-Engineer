/* DESAFIO 2: O usu�rio (possivelmente o professor) dever� entrar com dois valores que representam as notas de um aluno em cada bimestre, e o computador 
retornar� o resultado da m�dia desses valores (m�dia das notas). Ent�o, se a m�dia for maior ou igual a 6.0 (seis), o aluno est� aprovado; caso contr�rio, 
est� reprovado.*/

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


