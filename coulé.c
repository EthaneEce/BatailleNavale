#include "biblio.h"

void coule(int infotab[11][3],char tabj1bas[15][15],char tabj2haut[15][15])
{
    int numbat,j,q,s,inf,a;
    for (numbat=1; numbat<11; numbat++)
    {
        inf=infotab[numbat][1];
        if(numbat==1)///cuirassé
        {
                if(inf==0)///cuirassé vertical
                {
                    a=0;
                for(j=0; j<7; j++)
                {
                    q=infotab[numbat][2];
                    s=infotab[numbat][3];
                    if (tabj1bas[q+j][s]=='X'||tabj1bas[q+j][s]==' ')
                    {

                        a++;
                    }
                }
                if(a==7)
                {
                    q=infotab[numbat][2];
                    s=infotab[numbat][3];
                    for(j=0; j<7; j++)
                    {
                        tabj1bas[q+j][s]=' ';
                        tabj2haut[q+j][s]='x';
                    }
                }
                }
                else if (inf==1){///cuirassé horizontal
                a=0;
                for(j=0; j<7; j++)
                {
                    q=infotab[1][2];
                    s=infotab[1][3];
                    if (tabj1bas[q][s+j]=='X'||tabj1bas[q][s+j]==' ')
                    {
                        a++;
                    }
                }
                if(a==7)
                {
                    q=infotab[numbat][2];
                    s=infotab[numbat][3];
                    for(j=0; j<7; j++)
                    {
                        tabj1bas[q][s+j]=' ';
                        tabj2haut[q][s+j]='x';
                    }
                }
                }

        }

        else if(numbat==2||numbat==3)///croiseur
        {
            if(inf==0)///croiseur vertical
            {

            a=0;
            for(j=0; j<5; j++)
                {
                    q=infotab[numbat][2];
                    s=infotab[numbat][3];
                    if (tabj1bas[q+j][s]=='X'||tabj1bas[q+j][s]==' ')
                    {
                        a++;
                    }
                }
                if(a==5)
                {
                    q=infotab[numbat][2];
                    s=infotab[numbat][3];
                    for(j=0; j<5; j++)
                    {
                        tabj1bas[q+j][s]=' ';
                        tabj2haut[q+j][s]='x';
                    }
                }
            }
            else if(inf==1)///croiseur horizontal
            {
                a=0;
                for(j=0; j<5; j++)
                {
                    q=infotab[numbat][2];
                    s=infotab[numbat][3];
                    if (tabj1bas[q][s+j]=='X'||tabj1bas[q][s+j]==' ')
                    {
                        a++;
                    }
                }
                if(a==5)
                {
                    q=infotab[numbat][2];
                    s=infotab[numbat][3];
                    for(j=0; j<5; j++)
                    {
                        tabj1bas[q][s+j]=' ';
                        tabj2haut[q][s+j]='x';
                    }
                }
            }
            else if (inf==2){
                return 0;
            }
        }
        else if((numbat==4||numbat==5)||numbat==6)///destroyeur
        {
            if(inf==0)///destroyeur vertical
            {
                a=0;
                for(j=0; j<3; j++)
                {
                    q=infotab[numbat][2];
                    s=infotab[numbat][3];
                    if (tabj1bas[q+j][s]=='X'||tabj1bas[q+j][s]==' ')
                    {
                        a++;
                    }
                }
                if(a==3)
                {
                    q=infotab[numbat][2];
                    s=infotab[numbat][3];
                    for(j=0; j<3; j++)
                    {
                        tabj1bas[q+j][s]=' ';
                        tabj2haut[q+j][s]='x';
                    }
                }
            }
            else if (inf==1)///destroyeur horizontal
            {
                a=0;
                for(j=0; j<3; j++)
                {
                    q=infotab[numbat][2];
                    s=infotab[numbat][3];
                    if (tabj1bas[q][s+j]=='X'||tabj1bas[q][s+j]==' ')
                    {
                        a++;
                    }
                }
                if(a==3)
                {
                    q=infotab[numbat][2];
                    s=infotab[numbat][3];
                    for(j=0; j<3; j++)
                    {
                        tabj1bas[q][s+j]=' ';
                        tabj2haut[q][s+j]='x';
                    }
                }
            }
            else if (inf==2){
                return 0;
            }
        }
        else if (numbat<1||numbat>6)
        {
            return 0;
        }

    }
}
