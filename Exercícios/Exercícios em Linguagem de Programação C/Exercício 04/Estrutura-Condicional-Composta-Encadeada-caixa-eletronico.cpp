/* DESAFIO 4 - operação em um caixa eletrônico. Uma das primeiras atividades que o usuário deve realizar após ter se identificado é selecionar a 
operação a ser executada. Por exemplo: verificar saldo, emitir extrato, saque e sair. */

#include<stdio.h>

int main (){
	
	int number = 0;
	
	printf("Type e a number: ");
	printf("\n[1] Balance \t[2] Extract \n[3] Withdraw \t[4] Exit\n");
	scanf("%d", &number);
	
	if (number == 1){
		printf("Cheking Balance");
	}else{
		if(number == 2){
		printf("Extracting...");
	}else{
		if (number == 3){
		printf("Withdrawing");
	}else{
	printf("Exiting");
		}
	}
}

return 0;

}
