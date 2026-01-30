// 9. Produit vecteur × matrice
void prod_vect_mat(float vect[], float mat[][MAX], float prod[], int n, int m) {
    printf("=== PRODUIT VECTEUR × MATRICE ===\n");
    
    // Vérification compatibilité
    if (n != m) {
        printf("Erreur: taille vecteur (%d) doit egaler lignes matrice (%d)\n", n, m);
        return;
    }
    
    // Initialisation
    for (int j = 0; j < n; j++) {
        prod[j] = 0;
    }
    
    // Calcul
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            prod[j] += vect[i] * mat[i][j];
        }
    }
    
    printf("Resultat: [");
    for (int j = 0; j < n; j++) {
        printf("%.2f", prod[j]);
        if (j < n - 1) printf(", ");
    }
    printf("]\n");
}

// Fonctions auxiliaires
void saisir_vecteur(float tab[], int n, char* nom) {
    printf("Saisie du vecteur %s (%d elements):\n", nom, n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%f", &tab[i]);
    }
}

void saisir_matrice(float tab[][MAX], int n, int m, char* nom) {
    printf("Saisie de la matrice %s (%dx%d):\n", nom, n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%f", &tab[i][j]);
        }
    }
}

void afficher_vecteur(float tab[], int n) {
    printf("Vecteur: [");
    for (int i = 0; i < n; i++) {
        printf("%.2f", tab[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");
}

void afficher_matrice(float tab[][MAX], int n, int m) {
    printf("Matrice %dx%d:\n", n, m);
    for (int i = 0; i < n; i++) {
        printf("  [");
        for (int j = 0; j < m; j++) {
            printf("%8.2f", tab[i][j]);
        }
        printf("]\n");
    }
}