#include "biblio.h"
#define N 15

int tirfusee(char tabfusee[4][4],char tabj1haut[N][N],char tabj2bas[N][N],char tabj1bas[N][N])
{
    int colonne,i,j,T,k,l;// T pour touché
    char ligne;
    do{
    printf("choissisez les coordonnees du tir(a-m)(1-15): \n Colonne (lettre en minuscule): ");
    fflush(stdin);
    scanf("%c",&ligne);
    fflush(stdin);
    printf(" Ligne (chiffre):");
    scanf("%d",&colonne);
    ligne=ligne-'a'+1;
    }while((colonne<1||colonne>15)||(ligne<1||ligne>12));
    colonne=colonne-1;
    ligne=ligne-1;

    for (i=colonne;i<colonne+4;i++)
    {

        for (j=ligne;j<ligne+4;j++)
        {

                k=i-colonne;
                l=j-ligne;
                tabfusee[k][l]=tabj1haut[i][j];
                tabj1haut[i][j]=tabj2bas[i][j];


        }
    }
    system("cls");
    grille(tabj1haut,tabj1bas);
    Sleep(4000);
    for (i=colonne;i<colonne+4;i++)
    {

        for (j=ligne;j<ligne+4;j++)
        {

                k=i-colonne;
                l=j-ligne;
                tabj1haut[i][j]=tabfusee[k][l];


        }
    }
    system("cls");
    grille(tabj1haut,tabj1bas);
    Sleep(2000);
    system("cls");
    return 1;


}
