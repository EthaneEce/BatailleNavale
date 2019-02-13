#include "biblio.h"
void sauvegarde(int infotab[11][3],char tabj1bas[N][N],char tabj1haut[N][N],int infoj2tab[10][3],char tabj2bas[N][N],char tabj2haut[N][N])
{
    int i,j;
    FILE*j1i=NULL;
    FILE*j1b=NULL;
    FILE*j1h=NULL;
    FILE*j2i=NULL;
    FILE*j2b=NULL;
    FILE*j2h=NULL;
    j1i= fopen ("infotab.txt", "w+");
    j1b= fopen ("tabj1bas.txt", "w+");
    j1h= fopen ("tabj1haut.txt", "w+");
    j2i= fopen ("infoj2tab.txt", "w+");
    j2b= fopen ("tabj2bas.txt", "w+");
    j2h= fopen ("tabj2haut.txt", "w+");


    for(i=0; i<14; i++)
    {
        for(j=0; j<15; j++)
        {
            fprintf(j1b, "%c", tabj1bas[i][j]);
        }
        fprintf(j1b, "\n");
    }
    for(j=0; j<15; j++)
        {
            fprintf(j1b, "%c", tabj1bas[14][j]);
        }



    for(i=0; i<14; i++)
    {
        for(j=0; j<15; j++)
        {
            fprintf(j2b, "%c", tabj2bas[i][j]);
        }
        fprintf(j2b, "\n");
    }
    for(j=0; j<15; j++)
        {
            fprintf(j2b, "%c", tabj2bas[14][j]);
        }



    for(i=0; i<14; i++)
    {
        for(j=0; j<15; j++)
        {
            fprintf(j1h, "%c", tabj1haut[i][j]);
        }
        fprintf(j1h, "\n");
    }
    for(j=0; j<15; j++)
        {
            fprintf(j1h, "%c", tabj1haut[14][j]);
        }




    for(i=0; i<14; i++)
    {
        for(j=0; j<15; j++)
        {
            fprintf(j2h, "%c", tabj2haut[i][j]);
        }
        fprintf(j2h, "\n");
    }
    for(j=0; j<15; j++)
        {
            fprintf(j2h, "%c", tabj2haut[14][j]);
        }



    for(i=0; i<10; i++)
    {
        for(j=0; j<3; j++)
        {
            fprintf(j1i, "%d", infotab[i][j]);
        }
        fprintf(j1i, "\n");
    }
    for(j=0; j<3; j++)
        {
            fprintf(j1i, "%d", infotab[10][j]);
        }


    for(i=0; i<10; i++)
    {
        for(j=0; j<3; j++)
        {
            fprintf(j2i, "%d", infoj2tab[i][j]);
        }
        fprintf(j2i, "\n");
    }
    for(j=0; j<3; j++)
        {
            fprintf(j2i, "%d", infoj2tab[10][j]);
        }



    fclose(j1i);
    fclose(j1b);
    fclose(j1h);
    fclose(j2i);
    fclose(j2b);
    fclose(j2h);
}


