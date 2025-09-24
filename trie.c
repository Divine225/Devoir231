#include <stdio.h>
#include <stdbool.h>

// Fonction qui teste si un tableau est trié
bool estTrie(int tab[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (tab[i] > tab[i + 1]) {
            return false; // trouvé un élément mal placé
        }
    }
    return true; // tout est bien ordonné
}

int main() {
    int n;

    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int tab[n];

    printf("Entrez les %d elements du tableau :\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    if (estTrie(tab, n)) {
        printf("Le tableau est trie en ordre croissant.\n");
    } else {
        printf("Le tableau n'est pas trie.\n");
    }

    return 0;
}
