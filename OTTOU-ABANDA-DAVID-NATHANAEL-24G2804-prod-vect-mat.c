#include <stdio.h>
#define MAX 10

// Fonction produit vecteur × matrice
void prod_vect_mat(float vect[], float mat[][MAX], float prod[], int n, int m) {
    printf("=== PRODUIT VECTEUR × MATRICE ===\n");
    
    // Vérification compatibilité dimensions
    if (n != m) {
        printf("❌ Erreur: taille vecteur (%d) doit egaler lignes matrice (%d)\n", n, m);
        printf("   Vecteur: %d elements | Matrice: %d lignes\n", n, m);
        return;
    }
    
    // Initialisation du résultat
    for (int j = 0; j < n; j++) {
        prod[j] = 0.0;
    }
    
    // Calcul du produit : vecteur × matrice
    printf("Calcul: ");
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            prod[j] += vect[i] * mat[i][j];
            printf("%.1f×%.1f", vect[i], mat[i][j]);
            if (i < m-1) printf(" + ");
        }
        if (j < n-1) printf(" | ");
    }
    printf("\n");
    
    // Affichage du résultat
    printf("📊 Resultat: [");
    for (int j = 0; j < n; j++) {
        printf("%8.2f", prod[j]);
    }
    printf("]\n");
}

// Saisie d'un vecteur
void saisir_vecteur(float tab[], int n, char* nom) {
    printf("\n📥 Saisie du vecteur '%s' (%d elements):\n", nom, n);
    for (int i = 0; i < n; i++) {
        printf("  Element %d: ", i + 1);
        scanf("%f", &tab[i]);
    }
}

// Saisie d'une matrice
void saisir_matrice(float tab[][MAX], int n, int m, char* nom) {
    printf("\n📥 Saisie de la matrice '%s' (%d x %d):\n", nom, n, m);
    for (int i = 0; i < n; i++) {
        printf("  Ligne %d: ", i + 1);
        for (int j = 0; j < m; j++) {
            scanf("%f", &tab[i][j]);
        }
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

// Affichage d'une matrice
void afficher_matrice(float tab[][MAX], int n, int m, char* nom) {
    printf("🔹 %s (%dx%d):\n", nom, n, m);
    for (int i = 0; i < n; i++) {
        printf("  [");
        for (int j = 0; j < m; j++) {
            printf("%6.2f", tab[i][j]);
        }
        printf("]\n");
    }
}

// Fonction principale
int main() {
    printf("========================================\n");
    printf("   PRODUIT VECTEUR-MATRICE\n");
    printf("   Auteur: OTTOU ABANDA David Nathanael\n");
    printf("========================================\n");
    
    int n, m;
    float vecteur[MAX];
    float matrice[MAX][MAX];
    float resultat[MAX];
    
    // Saisie des dimensions
    printf("\n🎯 Dimensions du calcul:\n");
    printf("Taille du vecteur (n): ");
    scanf("%d", &n);
    printf("Nombre de colonnes matrice (m): ");
    scanf("%d", &m);
    
    // Vérification des limites
    if (n > MAX || m > MAX) {
        printf("❌ Erreur: dimensions max depassees (MAX = %d)\n", MAX);
        return 1;
    }
    
    // Saisie des données
    saisir_vecteur(vecteur, n, "V");
    saisir_matrice(matrice, n, m, "M");  // n lignes, m colonnes
    
    // Affichage des données saisies
    printf("\n📋 Donnees saisies:\n");
    afficher_vecteur(vecteur, n, "Vecteur V");
    afficher_matrice(matrice, n, m, "Matrice M");
    
    // Calcul du produit
    printf("\n⚡ Calcul en cours...\n");
    prod_vect_mat(vecteur, matrice, resultat, n, m);
    
    // Affichage final
    printf("\n✅ RESULTAT FINAL:\n");
    afficher_vecteur(vecteur, n, "Vecteur d'entree");
    printf("   ×\n");
    afficher_matrice(matrice, n, m, "Matrice d'entree");
    printf("   =\n");
    afficher_vecteur(resultat, n, "Vecteur resultat");
    
    printf("\n========================================\n");
    printf("   Calcul termine avec succes! 🎉\n");
    printf("========================================\n");
    
    return 0;
}
