#include <stdio.h>

int main() {

    int n;
    int somma = 0;

    printf("Inserisci la lunghezza della stringa: ");
    scanf("%d", &n);
    
    
       int i = 0;

    while(i < n) {
        int bit = -1;

        while(bit != 0 && bit != 1) {  
           
            printf("Inserisci il %d° bit: ", i + 1);
            scanf("%d", &bit);
            
            if(bit != 0 && bit != 1) {
                printf("Errore\n");
            }
        }

        int potenza = 1;
        int a = 0;
        
        while(a < i) {
            potenza *= 2;
            a++;
        }
        
        somma += potenza * bit;
        i++;
    }

    printf("Il numero in base 10 è pari a: %d\n\n", somma);

    return 0;
}
