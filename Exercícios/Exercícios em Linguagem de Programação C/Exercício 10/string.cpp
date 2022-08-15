#include <stdio.h>

int main (){
	char name[30] = "";
	char name1[2] = {'O', 'i'};
	char name2[30] = "";
	
	printf("\nWhat is your firts name?");
	scanf("%s", name);  /* o operador & não é usado na função scanf() Isso ocorre porque, ao usarmos o nome de um vetor 
	sem a especificação de um índice para ele, o compilador já entende que se trata de um endereço de memória. 
	Além disso a função scanf não armazena espaços!!! interrompe o codigo qd der espaço */
	printf("\nNice to meet you, %s!", name);
	printf("\n%s!", &name1[1]); // Aqui preciso usar o & porque estou chamando os índices e não o nome do vetor
	
	printf("\n");
	printf("\nWhat is your First and Last name?");
	fflush(stdin); // uso opcional mas garante que a entrada padrão (stdin) seja limpa (sem informações de leituras anteriores) antes de armazenar.
	fgets(name,30,stdin);
	printf("\n Name + Last Name: %s", name);
}
