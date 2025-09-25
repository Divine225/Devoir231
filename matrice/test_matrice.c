#include "matrice.h"

int main(){
    int choix;
    do
    {
        int ch;
        printf("\t-*MENU*-\n1-Somme de 2 matrices\n2-Produit de 2 matrices\nentrez le numero du choix que vous faites.");
        scanf("%d",&ch);
        if (ch==1)
        {
            somme_mat();
        
        }else if (ch==2)
        {
            produit_mat();
        }else 
        {
            printf("Entrez un choix valide !!!");
        }
        
        printf("\n voulez-vous effectuer une autre operation?(si oui tapez 1 si non tapez 0)");
        scanf("%d",&choix);

        } while (choix==1);

    return 0;
}