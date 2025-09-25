#include "matrice.h"

int main(){
    int choix;
    do
    {
        int ch;
        printf("\t-*MENU*-\n1-mediane d'un tableau\n2-recherche sequentielle\nentrez le numero du choix que vous faites.");
        scanf("%d",&ch);
        if (ch==1)
        {
            median_tab();
        
        }else if (ch==2)
        {
            recherche_seq();
        }else 
        {
            printf("Entrez un choix valide !!!");
        }
        
        printf("\n voulez-vous effectuer une autre operation?(si oui tapez 1 si non tapez 0)");
        scanf("%d",&choix);

        } while (choix==1);

    return 0;
}