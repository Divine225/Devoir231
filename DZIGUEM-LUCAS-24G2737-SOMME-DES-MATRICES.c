#include <stdio.h>
#define MAX 10

// Fonction somme de matrices
void som_mat(float tab1[][MAX], float tab2[][MAX], int n, int m) {
    printf("=== SOMME DES MATRICES ===\n");
    printf("Dimensions: %d lignes × %d colonnes\n\n", n, m);
    
    float som_tab[MAX][MAX];
    
    printf("🔧 Calcul élément par élément:\n");
    for (int i = 0; i < n; i++) {
        printf("  Ligne %d: ", i + 1);
        for (int j = 0; j < m; j++) {
            som_tab[i][j] = tab1[i][j] + tab2[i][j];
            printf("(%.1f+%.1f)", tab1[i][j], tab2[i][j]);
            if (j < m - 1) printf(" | ");
        }
        printf("\n");
    }
    
    printf("\n📊 RESULTAT SOMME MATRICIELLE:\n");
    for (int i = 0; i < n; i++) {
        printf("  [");
        for (int j = 0; j < m; j++) {
            printf("%8.2f", som_tab[i][j]);
        }
        printf("]\n");
    }
}

// Saisie d'une matrice
void saisir_matrice(float tab[][MAX], int n, int m, char* nom) {
    printf("\n📥 Saisie de la matrice '%s' (%d × %d):\n", nom, n, m);
    for (int i = 0; i < n; i++) {
        printf("  Ligne %d: ", i + 1);
        for (int j = 0; j < m; j++) {
            scanf("%f", &tab[i][j]);
        }
    }
}

// Affichage d'une matrice
void afficher_matrice(float tab[][MAX], int n, int m, char* nom) {
    printf("🔹 %s (%d×%d):\n", nom, n, m);
    for (int i = 0; i < n; i++) {
        printf("  [");
        for (int j = 0; j < m; j++) {
            printf("%8.2f", tab[i][j]);
        }
        printf("]\n");
    }
}

// Fonction principale dédiée à la somme de matrices
int main() {
    printf("========================================\n");
    printf("   SOMME DE MATRICES\n");
    printf("   Auteur: OTTOU ABANDA David Nathanael\n");
    printf("========================================\n");
    
    int n, m;
    float matrice1[MAX][MAX], matrice2[MAX][MAX];
    
    // Saisie des dimensions
    printf("\n🎯 Dimensions des matrices:\n");
    printf("Nombre de lignes (n): ");
    scanf("%d", &n);
    printf("Nombre de colonnes (m): ");
    scanf("%d", &m);
    
    // Validation des dimensions
    if (n <= 0 || m <= 0) {
        printf("❌ Erreur: les dimensions doivent être positives\n");
        return 1;
    }
    if (n > MAX || m > MAX) {
        printf("❌ Erreur: dimensions maximales supportées: %d×%d\n", MAX, MAX);
        return 1;
    }
    
    // Saisie des matrices
    saisir_matrice(matrice1, n, m, "A");
    saisir_matrice(matrice2, n, m, "B");
    
    // Affichage des matrices saisies
    printf("\n📋 MATRICES EN ENTREE:\n");
    afficher_matrice(matrice1, n, m, "Matrice A");
    printf("\n");
    afficher_matrice(matrice2, n, m, "Matrice B");
    
    // Calcul de la somme
    printf("\n⚡ CALCUL EN COURS...\n");
    som_mat(matrice1, matrice2, n, m);
    
    // Affichage final synthétique
    printf("\n✅ RESULTAT FINAL - SOMME A + B\n");
    printf("A + B = \n");
    for (int i = 0; i < n; i++) {
        printf("  [");
        for (int j = 0; j < m; j++) {
            printf("%8.2f", matrice1[i][j] + matrice2[i][j]);
        }
        printf("]\n");
    }
    
    // Propriétés mathématiques
    printf("\n💡 PROPRIETES MATHEMATIQUES:\n");
    printf("   • Commutativité: A + B = B + A ✓\n");
    printf("   • Associativité: (A + B) + C = A + (B + C) ✓\n");
    printf("   • Élément neutre: A + 0 = A ✓\n");
    printf("   • Dimensions conservées: (%d×%d) + (%d×%d) = (%d×%d) ✓\n", 
           n, m, n, m, n, m);
    
    printf("\n========================================\n");
    printf("   Calcul termine avec succes! 🎉\n");
    printf("========================================\n");
    
    return 0;
}
