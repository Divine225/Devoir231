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
