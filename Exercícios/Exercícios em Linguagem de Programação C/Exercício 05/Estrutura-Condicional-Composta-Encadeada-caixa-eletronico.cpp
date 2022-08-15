/* DESAFIO 3 - operação em um caixa eletrônico. Uma das primeiras atividades que o usuário deve realizar após ter se identificado é selecionar a 
operação a ser executada. Por exemplo: verificar saldo, emitir extrato, saque e sair. */

#include<stdio.h>

int main (){
	
	int number = 0;
	float value = 0;
	const float balance = 2000;
	float extract = 0;
	
	printf("Type e a number: ");
	printf("\n[1] Balance \t[2] Extract \n[3] Withdraw \t[4] Exit\n");
	scanf("%d", &number);
	
	if (number == 1){
	printf("Cheking Balance = %.2f", balance);
	} else if (number == 2){
	printf("Print Extract... \nBalance: %.2f", balance);
	} else if (number == 3){
	printf("\nEnter the amount to withdraw: ");
	scanf("%f", &value);
	printf("Value: %.2f", value);
	}if (number == 3 and value < balance){  // Colocr if aqui pois já existe uma condição anterior com "3"
	extract = (balance - value);
	printf("\nRelease cash: %.2f", value);
	printf("\nCheking Balance: %.2f", extract);
	}if (number == 3 and value > balance){  // Colocr if aqui pois já existe uma condição anterior com "3"
	printf ("\nYou have exceeded the maximum allowed value");
	}else if (number == 4){
	printf("Exiting");	
}
return 0;
}
