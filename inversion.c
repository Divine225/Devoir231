#include <stdio.h>

int main(void) {
    int n;

    printf("Entrez la taille du tableau : ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Taille invalide.\n");
        return 1;
    }

    int tab[n];
    printf("Entrez %d elements :\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    // inversion in-place : échanger tab[i] et tab[n-1-i]
    for (int i = 0; i < n / 2; i++) {
        int tmp = tab[i];
        tab[i] = tab[n - 1 - i];
        tab[n - 1 - i] = tmp;
    }

    printf("Tableau inverse :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
