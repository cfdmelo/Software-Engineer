#include <stdio.h>

int main (){
	char name[30] = "";
	char name1[2] = {'O', 'i'};
	char name2[30] = "";
	
	printf("\nWhat is your firts name?");
	scanf("%s", name);  /* o operador & n�o � usado na fun��o scanf() Isso ocorre porque, ao usarmos o nome de um vetor 
	sem a especifica��o de um �ndice para ele, o compilador j� entende que se trata de um endere�o de mem�ria. 
	Al�m disso a fun��o scanf n�o armazena espa�os!!! interrompe o codigo qd der espa�o */
	printf("\nNice to meet you, %s!", name);
	printf("\n%s!", &name1[1]); // Aqui preciso usar o & porque estou chamando os �ndices e n�o o nome do vetor
	
	printf("\n");
	printf("\nWhat is your First and Last name?");
	fflush(stdin); // uso opcional mas garante que a entrada padr�o (stdin) seja limpa (sem informa��es de leituras anteriores) antes de armazenar.
	fgets(name,30,stdin);
	printf("\n Name + Last Name: %s", name);
}
