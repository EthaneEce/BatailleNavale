#include "biblio.h"
#define N 15

void cuirasse(int infotab[11][3],char tabj1bas[N][N])
{
    int t,p,k,l; //variables pour les boucles



    p=rand()%2;
    infotab[1][1]=p;
    if (p==1)   //horizontal
    {
        infotab[1][2]=rand()%15;
        infotab[1][3]=rand()%9;
        l=infotab[1][3];
        k=infotab[1][2];

        for(t=l; t<=l+6; t++)
        {
            tabj1bas[k][t]='A';

        }


    }
    else
    {
        k=rand()%9;
        l=rand()%15;
        infotab[1][2]=k;
        infotab[1][3]=l;

        for(t=k; t<=k+6; t++)
        {
            tabj1bas[t][l]='A';

        }

    }
}

int croiseur(int infotab[11][3],char tabj1bas[N][N])
{
    int t,i;
    int k,l,z;


    for (i=0; i<2; i++)
    {
        tirage :
            infotab[i+2][1]=rand()%2;
    z=infotab[i+2][1];
        if (z==1)
        {
            k=rand()%15;
            l=rand()%11;

            infotab[i+2][2]=k;
            infotab[i+2][3]=l;

            for(t=l; t<=l+4; t++)
            {
                if (tabj1bas[k][t]!=' ')
                    goto tirage;

            }
            for(t=l; t<=l+4; t++)
            {

                tabj1bas[k][t]='D';
            }

        }
        else
        {
            k=rand()%11;
            l=rand()%15;

            infotab[i+2][2]=k;
            infotab[i+2][3]=l;

            for(t=k; t<=k+4; t++)
            {
                if (tabj1bas[t][l]!=' ')
                    goto tirage;

            }
            for(t=k; t<=k+4; t++)
            {
                tabj1bas[t][l]='D';
            }

        }
    }
}

int destroyer(int infotab[11][3],char tabj1bas[N][N])
{
    int t,i;
    int k,l,h;


    for (i=0; i<3; i++)
    {
        tirage2:
            infotab[i+4][1]=rand()%2;
    h=infotab[i+4][1];

    if (h==1)
    {

        k=rand()%15;
        l=rand()%13;

        infotab[i+4][2]=k;
        infotab[i+4][3]=l;

        for(t=l; t<=l+2; t++)
        {
            if (tabj1bas[k][t]!=' ')
                goto tirage2;
        }
        for(t=l; t<=l+2; t++)
        {
            tabj1bas[k][t]='K';
        }

    }
    else
    {
        k=rand()%13;
        l=rand()%15;

        infotab[i+4][2]=k;
        infotab[i+4][3]=l;

        for(t=k; t<=k+2; t++)
        {
            if (tabj1bas[t][l]!=' ')
                goto tirage2;
        }
        for(t=k; t<=k+2; t++)
        {
            tabj1bas[t][l]='K';
        }

    }
    }
}

void remptab (int infotab[11][3],char tabj1bas[N][N])
{

    int i,j,t,a;
    int k,l,p;
    a=0;

    cuirasse(infotab,tabj1bas);


    croiseur(infotab,tabj1bas);


    destroyer(infotab,tabj1bas);

    for (i=1; i<=3; i++)
    {
        tira:
        infotab[i+6][1]=2;

        k=rand()%15;
        l=rand()%15;

        infotab[i+6][2]=k;
        infotab[i+6][3]=l;


        if (tabj1bas[k][l]!=' ')
                goto tira;

        else
        tabj1bas[k][l]='G';
    }

        tirag:
        infotab[10][1]=2;

        k=rand()%15;
        l=rand()%15;

        infotab[10][2]=k;
        infotab[10][3]=l;


        if (tabj1bas[k][l]!=' ')
                goto tirag;

        else
        tabj1bas[k][l]='G';



}

void creatab(int infotab[11][3],char tabj1bas[N][N],char tabj1haut[N][N],int infoj2tab[11][3],char tabj2bas[N][N],char tabj2haut[N][N])
{
    int k,l;
    int nbk,nba,nbg,nbd;

    do
    {
        nbk=0;

        nba=0;
        nbg=0;
        nbd=0;
        for (k=0; k<N; k++)
        {
            for(l=0; l<N; l++)
            {
                tabj1bas[k][l]=' ';
                tabj1haut[k][l]=' ';
            }
        }
        remptab(infotab,tabj1bas);
        for (k=0; k<N; k++)
        {
            for(l=0; l<N; l++)
            {
                if (tabj1bas[k][l]=='A')
                    nba++;
                if (tabj1bas[k][l]=='K')
                    nbk++;
                if (tabj1bas[k][l]=='G')
                    nbg++;
                if (tabj1bas[k][l]=='D')
                    nbd++;
            }
        }
    }
    while (((nba!=7 || nbg!=4) || nbd!=10) || nbk!=9);

    do
    {
        nbk=0;
        nba=0;
        nbg=0;
        nbd=0;
        for (k=0; k<N; k++)
        {
            for(l=0; l<N; l++)
            {
                tabj2bas[k][l]=' ';
                tabj2haut[k][l]=' ';
            }
        }
        remptab(infoj2tab,tabj2bas);
        for (k=0; k<N; k++)
        {
            for(l=0; l<N; l++)
            {
                if (tabj2bas[k][l]=='A')
                    nba++;
                if (tabj2bas[k][l]=='K')
                    nbk++;
                if (tabj2bas[k][l]=='G')
                    nbg++;
                if (tabj2bas[k][l]=='D')
                    nbd++;
            }
        }
    }
    while (((nba!=7 || nbg!=4) || nbd!=10) || nbk!=9);
}
