#include <stdio.h>

int main() {
    int a, b;
    int resultat = 0;

    printf("Entrez deux nombres a et b : ");
    scanf("%d %d", &a, &b);
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            resultat = resultat + 1; 
        }
    }

    printf("%d * %d = %d\n", a, b, resultat);

    return 0;
}
