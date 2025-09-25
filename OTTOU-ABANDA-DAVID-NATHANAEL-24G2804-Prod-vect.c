#include <stdio.h>
#define MAX 10

// Fonction produit vectoriel généralisé
void produit_vectoriel(float vect1[], float vect2[], float resultat[], int n) {
    printf("=== PRODUIT VECTORIEL (R^%d) ===\n", n);
    
    // Initialisation du résultat
    for (int i = 0; i < n; i++) {
        resultat[i] = 0.0;
    }
    
    // Cas n=2 (déterminant 2D)
    if (n == 2) {
        resultat[0] = vect1[0] * vect2[1] - vect1[1] * vect2[0];
        printf("🎯 Cas 2D - Determinant du plan:\n");
        printf("   Calcul: (%.1f × %.1f) - (%.1f × %.1f)\n", 
               vect1[0], vect2[1], vect1[1], vect2[0]);
        printf("   = %.1f - %.1f\n", vect1[0] * vect2[1], vect1[1] * vect2[0]);
        printf("📊 Resultat: [%.2f]\n", resultat[0]);
        return;
    }
    
    // Cas n≥3 (approche générale avec déterminants)
    printf("🔧 Calcul des composantes par permutations:\n");
    for (int i = 0; i < n; i++) {
        float determinant = 0.0;
        int premier_terme = 1;
        
        printf("  Composante %d: ", i);
        
        for (int j = 0; j < n; j++) {
            if (j == i) continue;
            
            for (int k = 0; k < n; k++) {
                if (k == i || k == j) continue;
                
                // Détermination du signe par parité de la permutation
                int signe = 1;
                int indices[3] = {i, j, k};
                
                // Tri bulle pour déterminer le signe
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
                
                float terme = signe * vect1[j] * vect2[k];
                determinant += terme;
                
                // Affichage détaillé du calcul
                if (premier_terme) {
                    printf("%+.1f×%.1f×%.1f", (float)signe, vect1[j], vect2[k]);
                    premier_terme = 0;
                } else {
                    printf(" %+.1f×%.1f×%.1f", (float)signe, vect1[j], vect2[k]);
                }
            }
        }
        
        resultat[i] = determinant;
        printf(" = %.2f\n", determinant);
    }
    
    // Affichage final formaté
    printf("\n📊 VECTEUR RESULTAT:\n");
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%8.2f", resultat[i]);
    }
    printf("]\n");
}

// Saisie d'un vecteur
void saisir_vecteur(float tab[], int n, char* nom) {
    printf("\n📥 Saisie du vecteur '%s' (%d elements):\n", nom, n);
    for (int i = 0; i < n; i++) {
        printf("  Composante %d: ", i + 1);
        scanf("%f", &tab[i]);
    }
}

// Affichage d'un vecteur
void afficher_vecteur(float tab[], int n, char* nom) {
    printf("🔹 %s: [", nom);
    for (int i = 0; i < n; i++) {
        printf("%6.2f", tab[i]);
    }
    printf("]\n");
}

// Fonction principale dédiée au produit vectoriel
int main() {
    printf("========================================\n");
    printf("   PRODUIT VECTORIEL GENERALISE\n");
    printf("   Auteur: OTTOU ABANDA David Nathanael\n");
    printf("========================================\n");
    
    int n;
    float vecteur1[MAX], vecteur2[MAX], resultat[MAX];
    
    // Saisie de la dimension
    printf("\n🎯 Dimension de l'espace vectoriel (n): ");
    scanf("%d", &n);
    
    // Validation de la dimension
    if (n < 2) {
        printf("❌ Erreur: la dimension doit être ≥ 2\n");
        return 1;
    }
    if (n > MAX) {
        printf("❌ Erreur: dimension maximale supportée: %d\n", MAX);
        return 1;
    }
    
    // Saisie des vecteurs
    saisir_vecteur(vecteur1, n, "V1");
    saisir_vecteur(vecteur2, n, "V2");
    
    // Affichage des vecteurs saisis
    printf("\n📋 VECTEURS EN ENTREE:\n");
    afficher_vecteur(vecteur1, n, "Vecteur 1");
    afficher_vecteur(vecteur2, n, "Vecteur 2");
    
    // Calcul du produit vectoriel
    printf("\n⚡ CALCUL EN COURS...\n");
    produit_vectoriel(vecteur1, vecteur2, resultat, n);
    
    // Affichage final synthétique
    printf("\n✅ RESULTAT FINAL - PRODUIT VECTORIEL R^%d\n", n);
    printf("V1 × V2 = [");
    for (int i = 0; i < n; i++) {
        printf("%8.2f", resultat[i]);
    }
    printf("]\n");
    
    // Information supplémentaire selon la dimension
    if (n == 3) {
        printf("\n💡 En 3D, ce vecteur est orthogonal à V1 et V2\n");
        printf("   ||V1 × V2|| = aire du parallélogramme formé par V1 et V2\n");
    } else if (n == 2) {
        printf("\n💡 En 2D, résultat = déterminant |V1 V2|\n");
        printf("   Valeur = aire orientée du parallélogramme\n");
    }
    
    printf("\n========================================\n");
    printf("   Calcul termine avec succes! 🎉\n");
    printf("========================================\n");
    
    return 0;
}
