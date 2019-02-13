#include "biblio.h"



int asktire(char tabj1bas[N][N],char tabj2haut[N][N],char tabj2bas[N][N],char tabfusee[4][4],char tabj1haut[N][N],int**to)
{
    int tire,hh,vv,cmpt,cmpt1,fu;


    cmpt=0;
    cmpt1=0;
    do
    {
        printf("Avec quel bateau voulez-vous tirer ?\n");
        printf("1: cuirasse (9 cases)\n");
        printf("2: destroyeur (4 cases)\n");
        printf("3: croiseur (1 case)\n");
        printf("4: sous-marin (1 case)\n");
        scanf("%d",&tire);
        if (tire==1)
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
                tircuirasser(tabj1bas,tabj2haut);
            else if (cmpt==0)
            {
                printf("Vous n'avez plus de cuirasse. veuillez selectionner un autre bateau\n");
                tire=5;
            }
        }
        else if (tire==2)
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
                tirdestroyer(tabj1bas,tabj2haut);
            else if (cmpt1==0)
            {
                printf("Vous n'avez plus de croiseur. veuillez selectionner un autre bateau\n");
                tire=5;
            }
        }

        else if (tire==3)
        {
            for(vv=0; vv<15; vv++)
            {
                for(hh=0; hh<15; hh++)
                {
                    if (tabj2bas[hh][vv]=='K')
                        cmpt1++;
                }
            }
            if (cmpt1==0)
            {
                printf("Vous n'avez plus de destroyeur. veuillez selectionner un autre bateau\n");
                tire=5;
            }


            if(cmpt1!=0)
            {
                printf("Voulez vous tirer une fusee eclairante ou tirer normalement ?\n 1:Tire normal\n 2:Fusee eclairante(%d)\n",3-**to);
                scanf("%d",&fu);
                if (fu==1)
                {
                    tircroiseur(tabj1bas,tabj2haut);
                }

                else if (fu==2)
                {
                    if (**to!=3)
                    {
                        tirfusee(tabfusee,tabj1haut,tabj1bas,tabj2bas);
                        return 1;
                    }
                    else
                        tire=5;
                }

            }
        }

        else if (tire==4)
        {

            for(vv=0; vv<15; vv++)
            {
                for(hh=0; hh<15; hh++)
                {
                    if (tabj2bas[hh][vv]=='G')
                        cmpt1++;
                }
            }
            if(cmpt1!=0)
                tirsousmarin(tabj1bas,tabj2haut);
            else if (cmpt1==0)
            {
                printf("Vous n'avez plus de sous marin. veuillez selectionner un autre bateau\n");
                tire=5;
            }
        }
        if (tire<1&&tire>4)
            printf("La valeur rentree n'est pas valable, veuillez selectionner un tire.");
    }
    while (tire<1||tire>4);

}

void tircuirasser(char tabj1bas[N][N],char tabj2haut[N][N])
{
    int colonne,i,j,T;// T pour touché
    char ligne;
    do
    {
        printf("choissisez les coordonnees du tir(a-m)(1-15): \n Colonne (lettre en minuscule): ");
        fflush(stdin);
        scanf("%c",&ligne);
        fflush(stdin);
        printf(" Ligne (chiffre):");
        scanf("%d",&colonne);
        ligne=ligne-'a'+1;
    }
    while((colonne<1||colonne>15)||(ligne<1||ligne>13));
    colonne=colonne-1;
    ligne=ligne-1;

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


void tirdestroyer(char tabj1bas[N][N],char tabj2haut[N][N])
{
    int colonne,i,j,T;// T pour touché
    char ligne;
    do
    {
        printf("choissisez les coordonnees du tir (a-n)(1-15): \n Colonne (lettre en minuscule): ");
        fflush(stdin);
        scanf("%c",&ligne);
        fflush(stdin);
        printf(" Ligne (chiffre):");
        scanf("%d",&colonne);
        ligne=ligne-'a'+1;
    }
    while((colonne<1||colonne>15)||(ligne<1||ligne>14));
    colonne=colonne-1;
    ligne=ligne-1;
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
void tirsousmarin(char tabj1bas[N][N],char tabj2haut[N][N])
{
    int colonne,i,j,T;// T pour touché
    char ligne;
    do
    {
        printf("choissisez les coordonnees du tir: \n Colonne (lettre en minuscule): ");
        fflush(stdin);
        scanf("%c",&ligne);
        fflush(stdin);
        printf(" Ligne (chiffre):");
        scanf("%d",&colonne);
        ligne=ligne-'a'+1;
    }
    while((colonne<1||colonne>15)||(ligne<1||ligne>15));
    colonne=colonne-1;
    ligne=ligne-1;
    for (i=colonne; i<colonne+1; i++)
    {
        for (j=ligne; j<ligne+1; j++)
        {
            if(tabj1bas[i][j]!=' ')
            {
                if (tabj1bas[i][j]=='G')
                {
                    tabj1bas[i][j]=' ';
                    tabj2haut[i][j]='x';
                }
                else
                {
                    tabj1bas[i][j]='X';
                    tabj2haut[i][j]=tabj1bas[i][j];
                }
            }
        }
    }
}



void tircroiseur(char tabj1bas[N][N],char tabj2haut[N][N])
{
    int colonne,i,j,T;// T pour touché
    char ligne;
    do
    {
        printf("choissisez les coordonnees du tir: \n Colonne (lettre en minuscule): ");
        fflush(stdin);
        scanf("%c",&ligne);
        fflush(stdin);
        printf(" Ligne (chiffre):");
        scanf("%d",&colonne);
        ligne=ligne-'a'+1;
    }
    while((colonne<1||colonne>15)||(ligne<1||ligne>15));
    colonne=colonne-1;
    ligne=ligne-1;
    for (i=colonne; i<colonne+1; i++)
    {
        for (j=ligne; j<ligne+1; j++)
        {
            if(tabj1bas[i][j]!=' ')
            {
                tabj1bas[i][j]='X';
                tabj2haut[i][j]=tabj1bas[i][j];

            }
        }
    }


}
