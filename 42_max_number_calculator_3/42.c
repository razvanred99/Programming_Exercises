#include<stdio.h>

int main() {
	int a;
	int b;
	int c;
	printf("Inserisci a: ");
	scanf("%d", &a);
	printf("\nInserisci b: ");
	scanf("%d", &b);
	printf("\nInserisci c: ");
	scanf("%d", &c);

	int min;
	
	if(a > c) {
		min = c;
	} else {
		min = a;
	}

	if(b < min) {
		min = b;
	}

	printf("\n%d\n", min);
	
	return 0;
}
