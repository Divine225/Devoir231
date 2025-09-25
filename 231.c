#include <stdio.h>
#include <stdlib.h>
#define MAX 100  // Taille maximale fixe

// Déclarations des fonctions
void som_mat(float tab1[][MAX], float tab2[][MAX], int n, int m);
void prod_mat(float tab1[][MAX], float tab2[][MAX], int n, int m, int x);
void search_vecteur(float tab[], float x, int n);
int tri_vecteur(float tab[], int n);
float prod_nb(float a, float b);
float median_vecteur(float tab[], int n);
void inverse_vecteur(float tab[], int n);
void prod_vect_mat(float vect[], float mat[][MAX], float prod[], int n, int m);
void saisir_matrice(float tab[][MAX], int n, int m, char* nom);
void saisir_vecteur(float tab[], int n, char* nom);
void afficher_matrice(float tab[][MAX], int n, int m);
void afficher_vecteur(float tab[], int n);

// 1. Somme des matrices (gardée car c'est bien des matrices)
void som_mat(float tab1[][MAX], float tab2[][MAX], int n, int m) {
    printf("=== SOMME DES MATRICES ===\n");
    float som_tab[MAX][MAX];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            som_tab[i][j] = tab1[i][j] + tab2[i][j];
            printf("%8.2f", som_tab[i][j]);
        }
        printf("\n");
    }
}

// 2. Produit des matrices (gardée)
void prod_mat(float tab1[][MAX], float tab2[][MAX], int n, int m, int x) {
    printf("=== PRODUIT DES MATRICES ===\n");
    float prod_tab[MAX][MAX];
    
    // Initialisation à zéro
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < x; j++) {
            prod_tab[i][j] = 0;
        }
    }
    
    // Calcul du produit
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < x; j++) {
            for (int k = 0; k < m; k++) {
                prod_tab[i][j] += tab1[i][k] * tab2[k][j];
            }
            printf("%8.2f", prod_tab[i][j]);
        }
        printf("\n");
    }
}

// 3. Recherche séquentielle dans un VECTEUR
void search_vecteur(float tab[], float x, int n) {
    printf("=== RECHERCHE DE %.2f ===\n", x);
    
    for (int i = 0; i < n; i++) {
        if (tab[i] == x) {
            printf("Le nombre recherche est a la position %d\n", i+1);
            return;
        }
    }
    printf("%.2f introuvable dans le vecteur\n", x);
}

// 4. Produit de deux nombres positifs
float prod_nb(float a, float b) {
    if (a > 0 && b > 0) {
        printf("Produit de %.2f et %.2f = %.2f\n", a, b, a * b);
        return a * b;
    } else {
        printf("ERROR: Les deux nombres doivent etre positifs\n");
        return -1;
    }
}

// 5. Tester si un VECTEUR est trié
int tri_vecteur(float tab[], int n) {
    printf("=== TEST VECTEUR TRIE ===\n");
    
    for (int i = 0; i < n - 1; i++) {
        if (tab[i] > tab[i + 1]) {
            printf("Le vecteur n'est pas trie\n");
            return 0; // Non trié
        }
    }
    printf("Le vecteur est trie\n");
    return 1; // Trié
}

// 6. Médiane d'un VECTEUR
float median_vecteur(float tab[], int n) {
    // Copie et tri du vecteur (tri à bulles simple)
    float copie[MAX];
    for (int i = 0; i < n; i++) copie[i] = tab[i];
    
    // Tri du vecteur
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (copie[j] > copie[j + 1]) {
                float temp = copie[j];
                copie[j] = copie[j + 1];
                copie[j + 1] = temp;
            }
        }
    }
    
    // Calcul de la médiane
    if (n % 2 == 0) {
        return (copie[n/2 - 1] + copie[n/2]) / 2.0;
    } else {
        return copie[n/2];
    }
}

// 7. Inverser un VECTEUR
void inverse_vecteur(float tab[], int n) {
    printf("=== VECTEUR INVERSE ===\n");
    float inv[MAX];
    
    for (int i = 0; i < n; i++) {
        inv[i] = tab[n - 1 - i];
    }
    
    printf("Vecteur inverse: [");
    for (int i = 0; i < n; i++) {
        printf("%.2f", inv[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");
}

// 8. Produit vectoriel (pour vecteurs de taille 3)
void produit_vectoriel(float vect1[], float vect2[], float resultat[]) {
    printf("=== PRODUIT VECTORIEL ===\n");
    
    resultat[0] = vect1[1] * vect2[2] - vect1[2] * vect2[1];
    resultat[1] = vect1[2] * vect2[0] - vect1[0] * vect2[2];
    resultat[2] = vect1[0] * vect2[1] - vect1[1] * vect2[0];
    
    printf("Resultat: [%.2f, %.2f, %.2f]\n", resultat[0], resultat[1], resultat[2]);
}

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

int main() {
    int choix, n, m, x;
    float tab1[MAX][MAX], tab2[MAX][MAX];
    float vect1[MAX], vect2[MAX], resultat[MAX];
    float a, b, valeur;
    
    printf("=== MENU PRINCIPAL ===\n");
    
    do {
        printf("\n---1-Somme des matrices---\n");
        printf("---2-Produit des matrices---\n");
        printf("---3-Recherche sequentielle dans un vecteur---\n");
        printf("---4-Produit de deux nombres positifs---\n");
        printf("---5-Tester si un vecteur est trie---\n");
        printf("---6-Mediane d'un vecteur---\n");
        printf("---7-Inverser un vecteur---\n");
        printf("---8-Produit vectoriel---\n");
        printf("---9-Produit vecteur × matrice---\n");
        printf("---10-Quitter---\n");
        printf("\nFaites votre choix: ");
        scanf("%d", &choix);
        
        switch (choix) {
            case 1: // Somme des matrices
                printf("Dimensions des matrices (lignes colonnes): ");
                scanf("%d %d", &n, &m);
                saisir_matrice(tab1, n, m, "A");
                saisir_matrice(tab2, n, m, "B");
                som_mat(tab1, tab2, n, m);
                break;
                
            case 2: // Produit des matrices
                printf("Dimensions matrice 1 (lignes colonnes): ");
                scanf("%d %d", &n, &m);
                printf("Colonnes matrice 2: ");
                scanf("%d", &x);
                saisir_matrice(tab1, n, m, "A");
                saisir_matrice(tab2, m, x, "B");
                prod_mat(tab1, tab2, n, m, x);
                break;
                
            case 3: // Recherche dans un vecteur
                printf("Taille du vecteur: ");
                scanf("%d", &n);
                saisir_vecteur(vect1, n, "V");
                printf("Valeur a rechercher: ");
                scanf("%f", &valeur);
                search_vecteur(vect1, valeur, n);
                break;
                
            case 4: // Produit de deux nombres
                printf("Nombre 1: ");
                scanf("%f", &a);
                printf("Nombre 2: ");
                scanf("%f", &b);
                prod_nb(a, b);
                break;
                
            case 5: // Test si vecteur trié
                printf("Taille du vecteur: ");
                scanf("%d", &n);
                saisir_vecteur(vect1, n, "V");
                tri_vecteur(vect1, n);
                break;
                
            case 6: // Médiane d'un vecteur
                printf("Taille du vecteur: ");
                scanf("%d", &n);
                saisir_vecteur(vect1, n, "V");
                printf("Mediane: %.2f\n", median_vecteur(vect1, n));
                break;
                
            case 7: // Inverser un vecteur
                printf("Taille du vecteur: ");
                scanf("%d", &n);
                saisir_vecteur(vect1, n, "V");
                inverse_vecteur(vect1, n);
                break;
                
            case 8: // Produit vectoriel
                printf("Vecteurs de taille 3:\n");
                saisir_vecteur(vect1, 3, "V1");
                saisir_vecteur(vect2, 3, "V2");
                produit_vectoriel(vect1, vect2, resultat);
                break;
                
            case 9: // Produit vecteur × matrice
                printf("Taille du vecteur: ");
                scanf("%d", &n);
                printf("Lignes de la matrice: ");
                scanf("%d", &m);
                saisir_vecteur(vect1, n, "V");
                saisir_matrice(tab1, m, n, "M"); // m lignes, n colonnes
                prod_vect_mat(vect1, tab1, resultat, n, m);
                break;
                
            case 10:
                printf("Au revoir!\n");
                break;
                
            default:
                printf("Choix invalide!\n");
                break;
        }
    } while (choix != 10);
    
    return 0;
}