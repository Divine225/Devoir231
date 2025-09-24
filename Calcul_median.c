# include <stdio.h>

# define MAX_ELEMENTS_TRI 100

void tri_tableau (int Element[],int n)
{
    int j,i,temp;
for (i=0;i<n-1;i++)
{
    for (j=0;j<n-1-i;j++)
    {
    if (Element[j]>Element[j+1])
    {
        temp=Element[j];
       Element[j]=Element[j+1];
       Element[j+1]=temp; 
    }
}
}
}
void calcul_median (int Element[],int n)
{
    float m;
    if (n%2==1)
        printf ("la mediane du tableau est %d \n",Element[n/2]);
        else
        if (n%2==0)
        {
m= (Element[n/2-1]+Element[n/2])/2.0;
printf ("la mediane du tableau est %.2f \n",m);
        }
    }
int main ()
{
    int Element[MAX_ELEMENTS_TRI];
    int i,n;
    printf ("Entrer le nombre d'elements a enregister: \n");
    scanf ("%d",&n);
       printf ("Entrer les elements du tableau \n");
    for (i=0;i<n;i++)
    {
      scanf ("%d",&Element[i]);
    }
    int tri=1;
    for (i=0;i<n-1;i++)
    {
    if (Element[i]>Element[i+1])
    {
      tri=0;
      break;
    }
}
    if (!tri)
    {
        tri_tableau (Element,n);

    }
    calcul_median (Element,n);

    return 0;
}