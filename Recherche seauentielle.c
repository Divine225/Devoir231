# include <stdio.h>

# define MAX_ETUDIANTS 1000

typedef struct Etudiant 
{
    char nom [50];
    int age;
}Etudiant;

int main()
{
int n,i,recherche;
Etudiant etud [MAX_ETUDIANTS];
printf ("Entrez le nombre d'etudiants à enregistrer: \n");
scanf ("%d",&n);
for (i=0;i<n;i++)
{
    printf ("Entrer les informations de l'etudiants: \n");
printf ("Noms: \n");
scanf ("%s",etud[i].nom);
printf ("Age: \n");
scanf ("%d",&etud[i].age);
}
printf ("Entrer l'age à rechercher: \n");
scanf ("%d",&recherche);
int trouve=0;
for (i=0;i<n;i++)
{
    if (etud[i].age==recherche)
    {
        printf ("Trouvé Etudiant[%d]   Noms: %s   Age: %d \n",i,etud[i].nom,etud[i].age);
        trouve = 1;
    }
    }
    if (!trouve)
    printf ("not found");
    return 0;
}
