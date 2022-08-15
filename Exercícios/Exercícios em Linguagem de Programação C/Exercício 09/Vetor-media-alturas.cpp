#include <stdio.h>

int main (){
	
	float heigth[3] = {0.0, 0.0, 0.0};
	float avarege = 0.0;
	
	printf("\nHeight 1: ");
	scanf("%f", &heigth[0]);
	printf("\nHeight 2: ");
	scanf("%f", &heigth[1]);
	printf("\nHeight 3: ");
	scanf("%f", &heigth[2]);
	
	printf("\nHeight 1: %.2f", heigth[0]);
	printf("\nHeight 2: %.2f", heigth[1]);
	printf("\nHeight 3: %.2f", heigth[2]);
	
	avarege = (heigth[0] + heigth[1] + heigth[2]) / 3;
	
	printf("\nAvarege: %.2f", avarege);
	
	return 0;
}
