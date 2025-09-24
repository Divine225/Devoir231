#include "matrice.h"

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


float produit_mat(){
    int n,m,p,q;
    do{
        printf("NB: Le produit de 2 matrice n'est possible que si le nombre de colones de la premiere matrice est egale au nombre de lignes de la deuxieme matrice.\n");
        printf("entrez le nombre de lignes de la 1er matrice que vous-voulez utiliser.(un nombre entiers maturel.): ");
        scanf("%d",&n);
        printf("entrez le nombre de colones de la 1er matrice que vous-voulez utiliser.(un nombre entiers maturel.): ");
        scanf("%d",&m);
        printf("entrez le nombre de lignes de la 2eme matrice que vous-voulez utiliser.(un nombre entiers maturel.): ");
        scanf("%d",&p);
        printf("entrez le nombre de colones de la 2eme matrice que vous-voulez utiliser.(un nombre entiers maturel.): ");
        scanf("%d",&q);
    }while((m!=p) || (n<0 || n!=(int)n) && (m<0 || m!=(int)m) || (p<0 || p!=(int)p) || (q<0 || q!=(int)q));
    float A[n][m];
    float B[p][q];
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

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("entrez les element de la seconde matrice [%d][%d]:",i,j);
            scanf("%f",&B[p][q]);
        }
        
    }

    //produit des deux matrices

    float S[n][q];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < q; j++)
        {
            S[i][j]=0;
            for (int k = 0; k < m; k++)
            {
                S[i][j]+=A[i][k]*B[k][j];
            }
            
        }
        
    }

    //affichage

    printf("\n\tResultat\n\n A*B=S ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%.1f\t",S[i][j]);
        }
        printf("\n");
    }
    
}