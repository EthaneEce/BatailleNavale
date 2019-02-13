#include "biblio.h"

void niveaueasy(char tabj1bas[N][N],char tabj2haut[N][N],char tabj2bas[N][N])
{
    int colonne,i,j,T;// T pour touché
    int ligne;
    int choix,bateau,direction,vv,hh,cmpt,cmpt1;
    do
    {

        choix=rand()%3;
        bateau=rand()%4;
        direction=(rand()%2)+1;


        if (choix==2)//deplacement
        {
            if (bateau==1)//deplacement cuirasser
            {
                if (direction==1)
                {

                }
                else if (direction==2)
                {

                }
                else if (direction==3)
                {

                }

                else
                {

                }


            }

            else  if (bateau==2)// deplacement destroyer
            {
                if (direction==1)
                {

                }
                else if (direction==2)
                {

                }
                else if (direction==3)
                {

                }

                else
                {

                }


            }

            else  if (bateau==3)// deplacement croiseur
            {
                if (direction==1)
                {

                }
                else if (direction==2)
                {

                }
                else if (direction==3)
                {

                }

                else
                {

                }
            }

            else // deplacement sous-marin
            {
                if (direction==1)
                {

                }
                else if (direction==2)
                {

                }
                else if (direction==3)
                {

                }

                else
                {

                }

            }



        }
        else// tir
        {
            if (bateau==1)// tir cuirasser
            {

                for(vv=0; vv<15; vv++)
                {
                    for(hh=0; hh<15; hh++)
                    {
                        if (tabj2bas[hh][vv]=='A')
                            cmpt++;
                    }
                }
                if(cmpt!=0)
                {

                    ligne=rand()%13;
                    colonne=rand()%13;

                    for (i=colonne; i<colonne+3; i++)
                    {
                        for (j=ligne; j<ligne+3; j++)
                        {
                            if (tabj1bas[i][j]!=' '&&tabj1bas[i][j]!='G')
                            {
                                tabj1bas[i][j]='X';
                                tabj2haut[i][j]=tabj1bas[i][j];
                            }
                        }
                    }
                }
                else if (cmpt==0)
                {

                    bateau=4;
                }
            }

            else  if (bateau==2)///croiseur
            {
                for(vv=0; vv<15; vv++)
                {
                    for(hh=0; hh<15; hh++)
                    {
                        if (tabj2bas[hh][vv]=='D')
                            cmpt1++;
                    }
                }
                if(cmpt1!=0)
                {
                    ligne=rand()%12;
                    colonne=rand()%12;
                    for (i=colonne; i<colonne+2; i++)
                    {
                        for (j=ligne; j<ligne+2; j++)
                        {
                            if (tabj1bas[i][j]!=' '&&tabj1bas[i][j]!='G')
                            {
                                tabj1bas[i][j]='X';
                                tabj2haut[i][j]=tabj1bas[i][j];
                            }
                        }
                    }
                }
                else if (cmpt==0)
                {

                    bateau=4;
                }
            }
            else/// destoyeur ou sous marin
            {
                for(vv=0; vv<15; vv++)
                {
                    for(hh=0; hh<15; hh++)
                    {
                        if ((tabj2bas[hh][vv]=='K')||(tabj2bas[hh][vv]=='G'))

                            cmpt1++;
                    }
                }
                if(cmpt1!=0)
                {
                    ligne=rand()%15;
                          colonne=rand()%15;

                                  if (tabj1bas[colonne][ligne]!=' ')
                    {
                        tabj1bas[colonne][ligne]='X';
                    }
                }
                else if (cmpt==0)
                {

                    bateau=4;
                }
            }


        }

    }
    while(bateau<0||bateau>3);

    }
