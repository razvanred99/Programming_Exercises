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
	
	if(a > b && a > c) {
		printf("\n%d\n", a);
	}
	else {
		if(b > a && b > c) {
			printf("\n%d\n", b);
		}
		else {
			printf("\n%d\n", c);
		}
	}
	
	
	return 0;
}
