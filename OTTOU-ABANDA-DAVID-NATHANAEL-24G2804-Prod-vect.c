void produit_vectoriel(float vect1[], float vect2[], float resultat[], int n) {
    printf("=== PRODUIT VECTORIEL (R^%d) ===\n", n);
    
    // Initialisation
    for (int i = 0; i < n; i++) {
        resultat[i] = 0.0;
    }
    
    // Cas n=2 (spécial)
    if (n == 2) {
        resultat[0] = vect1[0] * vect2[1] - vect1[1] * vect2[0];
        printf("Resultat (determinant 2D): [%.2f]\n", resultat[0]);
        return;
    }
    
    // Cas n≥3 (approche générale)
    for (int i = 0; i < n; i++) {
        // Pour chaque composante i, on calcule un "déterminant généralisé"
        float determinant = 0.0;
        
        // Parcours des permutations (simplifié)
        for (int j = 0; j < n; j++) {
            if (j == i) continue;
            
            for (int k = 0; k < n; k++) {
                if (k == i || k == j) continue;
                
                // Le signe dépend de l'ordre des indices
                int signe = 1;
                int indices[3] = {i, j, k};
                
                // Tri des indices pour déterminer le signe
                for (int a = 0; a < 2; a++) {
                    for (int b = a + 1; b < 3; b++) {
                        if (indices[a] > indices[b]) {
                            int temp = indices[a];
                            indices[a] = indices[b];
                            indices[b] = temp;
                            signe = -signe;
                        }
                    }
                }
                
                determinant += signe * vect1[j] * vect2[k];
            }
        }
        
        resultat[i] = determinant;
    }
    
    // Affichage
    printf("Resultat: [");
    for (int i = 0; i < n; i++) {
        printf("%.2f", resultat[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");
}
