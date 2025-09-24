#include "tabeau.h"

void median_tab(){
    int n,p,d;
    float M;
    printf("entrez la taille du tableau dont vous voulez la mediane.");
    scanf("%d",&n);
    float tab[n];
    printf("entrez les elements du tableau");
    for (int i = 0; i < n-1; i++)
    {
      scanf("%f",&tab[i]);  
    }
    //trions la tableau
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (tab[j]>tab[j+1])
            {
                p=tab[j];
                tab[j]=tab[j+1];
                tab[j+1]=p;
            }
            
        }
        
    }
    if (n % 2==0)
    {
        d=n/2;
        M=(tab[n]+tab[n+1])/2;
    }else if (n%2==1)
    {
        d=n/2;
        M=tab[d+1];
    }
    
}


void recherche_seq(){
    int n;
    printf("entrez la taille du tableau .");
    scanf("%d",&n);
    float tab[n];
    printf("entrez les elements du tableau");
    for (int i = 0; i < n-1; i++)
    {
      scanf("%f",&tab[i]);  
    }
    int x;
    printf("quelle nombre voulez vous cherchez dans le tableau?  ");
    scanf("%d",x);

    int trouve=0;
    for (int i = 0; i < n; i++)
    {
        if (tab[i]=x)
        {
            trouve=1;
            printf("le nombre que vous cherchez est a la position %d",i);
        }else {
            i++;
        }
        if (trouve==0)
        {
            printf("Le nombre que vous recherchez n'est pas dans ce tableau");
        }
    
        
    }
    
}



