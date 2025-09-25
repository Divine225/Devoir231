#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float somme_mat(){
    int n,m;
    do{
        printf("entrez le nombre de lignes des matrices que vous-voulez utiliser.(un nombre entiers maturel.): ");
        scanf("%d",&n);
        printf("entrez le nombre de colones des matrices que vous-voulez utiliser.(un nombre entiers maturel.): ");
        scanf("%d",&m);
    }while((n<0 || n!=(int)n) || (m<0 || m!=(int)m));
    float A[n][m];
    float B[n][m];
    //remplissons la premiere matrice

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("entrez les element de la premiere matrice [%d][%d]:",i,j);
            scanf("%f",&A[i][j]);
        }
        
    }
    
    //remplissage de la seconde matrice

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("entrez les element de la seconde matrice [%d][%d]:",i,j);
            scanf("%f",&B[i][j]);
        }
        
    }

    //calcule de la somme

    float S[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            S[i][j]=A[i][j]+B[i][j];
        }
        
    }

    //affichage
    printf("\n\tResultat\n\n\tA+B=S ");
      for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%.1f\t",S[i][j]);
        }
        printf("\n");
    }

}

int main(){
  somme_mat();
  return 0;
}
