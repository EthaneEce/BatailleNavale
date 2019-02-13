#include "biblio.h"
void restore(int infotab[11][3],char tabj1bas[N][N],char tabj1haut[N][N],int infoj2tab[10][3],char tabj2bas[N][N],char tabj2haut[N][N])
{
    int i,j;
    FILE*j1i=NULL;
    FILE*j1b=NULL;
    FILE*j1h=NULL;
    FILE*j2i=NULL;
    FILE*j2b=NULL;
    FILE*j2h=NULL;
    j1i= fopen ("infotab.txt", "r");
    j1b= fopen ("tabj1bas.txt", "r");
    j1h= fopen ("tabj1haut.txt", "r");
    j2i= fopen ("infoj2tab.txt", "r");
    j2b= fopen ("tabj2bas.txt", "r");
    j2h= fopen ("tabj2haut.txt", "r");

    for(i=0; i<15; i++)
    {
        for(j=0; j<15; j++)
        {
            tabj1bas[i][j]=fgetc(j1b);
        }
        fscanf(j1b,"\n");
    }fclose(j1b);

    for(i=0; i<15; i++)
    {
        for(j=0; j<15; j++)
        {
            fscanf(j2b,"%c", &(tabj2bas[i][j]));
        }
        fscanf(j2b, "\n");
    }fclose(j2b);

    for(i=0; i<15; i++)
    {
        for(j=0; j<15; j++)
        {
            fscanf(j1h, "%c", &(tabj1haut[i][j]));
        }
        fscanf(j1h, "\n");
    }fclose(j1h);

    for(i=0; i<15; i++)
    {
        for(j=0; j<15; j++)
        {
            fscanf(j2h, "%c", &(tabj2haut[i][j]));
        }
        fscanf(j2h, "\n");
    }fclose(j2h);

    for(i=0; i<11; i++)
    {
        for(j=0; j<3; j++)
        {
            fscanf(j1i, "%d", &(infotab[i][j]));
        }
        fscanf(j1i, "\n");
    }fclose(j1i);

    for(i=0; i<11; i++)
    {
        for(j=0; j<3; j++)
        {
            fscanf(j2i, "%d", &(infoj2tab[i][j]));
        }
        fscanf(j2i, "\n");
    }fclose(j2i);







}
