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
