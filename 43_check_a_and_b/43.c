#include<stdio.h>

int main() {
	int a;
	int b;
	
	printf("Inserisci a: ");
	scanf("%d", &a);
	printf("\nInserisci b: ");
	scanf("%d", &b);
	
	int somma = a + b;
	
	if(b < 0) {
		printf("\nb è negativo");
	} else {
		printf("\nb è positivo");
	} 
	
	if(a % 2 == 0) {
		printf("\na è pari");
	} else {
		printf("\na è dispari");
	} 
	
	printf("\nSomma : %d\n", somma);
	
	if(a < 0) {
		a = a * -1;
	} else { 
		if(b < 0) {
			b = b * -1;
		}
	}
			
	printf("\n%d\n", a + b);
		
	
			

	
	return 0;
}
