#include "biblio.h"

void deplacement (int infotab[11][3],char tabj1bas[15][15],char tabj2haut[15][15])
{
    int bat,or,or2,or3,col,li;
    int t,r;
dep:
    printf("Quel bateau voulez vous deplacer ?\n");
    printf("1:  Cuirasse   (A) coord: %d %c\n",infotab[1][2]+1,'A'+infotab[1][3]);
    printf("2:  Croiseur   (D) coord: %d %c\n",infotab[2][2]+1,'A'+infotab[2][3]);
    printf("3:  Croiseur   (D) coord: %d %c\n",infotab[3][2]+1,'A'+infotab[3][3]);
    printf("4:  Destroyeur (K) coord: %d %c\n",infotab[4][2]+1,'A'+infotab[4][3]);
    printf("5:  Destroyeur (K) coord: %d %c\n",infotab[5][2]+1,'A'+infotab[5][3]);
    printf("6:  Destroyeur (K) coord: %d %c\n",infotab[6][2]+1,'A'+infotab[6][3]);
    printf("7:  Sous marin (G) coord: %d %c\n",infotab[7][2]+1,'A'+infotab[7][3]);
    printf("8:  Sous marin (G) coord: %d %c\n",infotab[8][2]+1,'A'+infotab[8][3]);
    printf("9:  Sous marin (G) coord: %d %c\n",infotab[9][2]+1,'A'+infotab[9][3]);

    scanf("%d",&bat);
    printf("\n\n");

    if (bat>9){
                goto dep;
            }
    else if (infotab[bat][1]==1)///horizontal
    {
        printf("Voulez vous le deplacer vers :\n  1:Droite\n  2:Gauche\n\n\n");
        scanf("%d",&or);

        if (or==1)///droite
        {
            col=infotab[bat][3];
            li=infotab[bat][2];
            if (bat==1)///cuirasse
            {
                for(t=col; t<col+7; t++)
                {
                    if ((tabj1bas[li][t]!='A'||col>7)||tabj1bas[li][col+7]!=' ')
                    {
                        printf("Vous ne pouvez pas deplacer ce bateau");
                        system("PAUSE");
                        goto dep;
                    }

                }
                tabj1bas[li][col]=' ';
                tabj1bas[li][col+7]='A';
                infotab[bat][3]++;
            }
            if (bat==2||bat==3)///croiseur
            {
                for(t=col; t<col+5; t++)
                {
                    if ((tabj1bas[li][t]!='D'||col>9)||tabj1bas[li][col+5]!=' ')
                    {
                        printf("Vous ne pouvez pas deplacer ce bateau");
                        system("PAUSE");
                        goto dep;
                    }

                }
                tabj1bas[li][col]=' ';
                tabj1bas[li][col+5]='D';
                infotab[bat][3]++;
            }
            if ((bat==4||bat==5)||bat==6)///destroyeur
            {
                for(t=col; t<col+3; t++)
                {
                    if ((tabj1bas[li][t]!='K'||col>11)||tabj1bas[li][col+3]!=' ')
                    {
                        printf("Vous ne pouvez pas deplacer ce bateau");
                        system("PAUSE");
                        goto dep;
                    }

                }
                tabj1bas[li][col]=' ';
                tabj1bas[li][col+3]='K';
                infotab[bat][3]++;
            }



        }
        if(or==2)///gauche
        {

            col=infotab[bat][3];
            li=infotab[bat][2];
            if (bat==1)///cuirasse
            {
                for(t=col; t<col+7; t++)
                {
                    if ((tabj1bas[li][t]!='A'||col==0)||tabj1bas[li][col-1]!=' ')
                    {
                        printf("Vous ne pouvez pas deplacer ce bateau");
                        system("PAUSE");
                        goto dep;
                    }

                }
                tabj1bas[li][col-1]='A';
                tabj1bas[li][col+6]=' ';
                infotab[bat][3]--;
            }
            if (bat==2||bat==3)///croiseur
            {
                for(t=col; t<col+5; t++)
                {
                    if ((tabj1bas[li][t]!='D'||col==0)||tabj1bas[li][col-1]!=' ')
                    {
                        printf("Vous ne pouvez pas deplacer ce bateau");
                        system("PAUSE");
                        goto dep;
                    }

                }
                tabj1bas[li][col-1]='D';
                tabj1bas[li][col+4]=' ';
                infotab[bat][3]--;
            }
            if ((bat==4||bat==5)||bat==6)///destroyeur
            {
                for(t=col; t<col+3; t++)
                {
                    if ((tabj1bas[li][t]!='K'||col==0)||tabj1bas[li][col-1]!=' ')
                    {
                        printf("Vous ne pouvez pas deplacer ce bateau");
                        system("PAUSE");
                        goto dep;
                    }

                }
                tabj1bas[li][col-1]='K';
                tabj1bas[li][col+2]=' ';
                infotab[bat][3]--;
            }

        }

    }
        else if (infotab[bat][1]==0)///verticale
        {
            printf("Voulez vous le deplacer vers :\n  1:Bas\n  2:Haut\n\n\n");
            scanf("%d",&or2);
            if (or2==1)///bas
            {
                col=infotab[bat][3];
                li=infotab[bat][2];
                if (bat==1)///cuirasse
                {
                    for(t=li; t<li+7; t++)
                    {
                        if ((tabj1bas[t][col]!='A'||li>7)||tabj1bas[li+7][col]!=' ')
                        {
                            printf("Vous ne pouvez pas deplacer ce bateau");
                            system("PAUSE");
                            goto dep;
                        }

                    }
                    tabj1bas[li][col]=' ';
                    tabj1bas[li+7][col]='A';
                    infotab[bat][2]++;
                }
                if (bat==2||bat==3)///croiseur
                {
                    for(t=li; t<li+5; t++)
                    {
                        if ((tabj1bas[t][col]!='D'||li>9)||tabj1bas[li+5][col]!=' ')
                        {
                            printf("Vous ne pouvez pas deplacer ce bateau");
                            system("PAUSE");
                            goto dep;
                        }

                    }
                    tabj1bas[li][col]=' ';
                    tabj1bas[li+5][col]='D';
                    infotab[bat][2]++;
                }
                if ((bat==4||bat==5)||bat==6)///destroyeur
                {
                    for(t=li; t<li+3; t++)
                    {
                        if ((tabj1bas[t][col]!='K'||li>11)||tabj1bas[li+3][col]!=' ')
                        {
                            printf("Vous ne pouvez pas deplacer ce bateau");
                            system("PAUSE");
                            goto dep;
                        }

                    }
                    tabj1bas[li][col]=' ';
                    tabj1bas[li+3][col]='K';
                    infotab[bat][2]++;
                }


            }
            if(or2==2)///haut
            {

                col=infotab[bat][3];
                li=infotab[bat][2];
                if (bat==1)///cuirasse
                {
                    for(t=li; t<li+7; t++)
                    {
                        if ((tabj1bas[t][col]!='A'||li==0)||tabj1bas[li-1][col]!=' ')
                        {
                            printf("Vous ne pouvez pas deplacer ce bateau");
                            system("PAUSE");
                            goto dep;
                        }

                    }
                    tabj1bas[li-1][col]='A';
                    tabj1bas[li+6][col]=' ';
                    infotab[bat][2]--;
                }
                if (bat==2||bat==3)///croiseur
                {
                    for(t=li; t<li+5; t++)
                    {
                        if ((tabj1bas[t][col]!='D'||li==0)||tabj1bas[li-1][col]!=' ')
                        {
                            printf("Vous ne pouvez pas deplacer ce bateau");
                            system("PAUSE");
                            goto dep;
                        }

                    }
                    tabj1bas[li-1][col]='D';
                    tabj1bas[li+4][col]=' ';
                    infotab[bat][2]--;
                }
                if ((bat==4||bat==5)||bat==6)///destroyeur
                {
                    for(t=li; t<li+3; t++)
                    {
                        if ((tabj1bas[t][col]!='K'||li==0)||tabj1bas[li-1][col]!=' ')
                        {
                            printf("Vous ne pouvez pas deplacer ce bateau");
                            system("PAUSE");
                            goto dep;
                        }

                    }
                    tabj1bas[li-1][col]='K';
                    tabj1bas[li+2][col]=' ';
                    infotab[bat][2]--;
                }

            }
        }

    else if (infotab[bat][1]==2)
    {
        col=infotab[bat][3];
        li=infotab[bat][2];
        printf("Voulez vous le deplacer vers :\n  1:BAS\n  2:Droite\n 3:Gauche\n 4:Haut\n");
        scanf("%d",&or3);
        if (or3==1) ///bas
        {
            for(t=li; t<li+1; t++)
            {
                if ((tabj1bas[t][col]!='G'||li>13)||tabj1bas[li+1][col]!=' ')
                {
                    printf("Vous ne pouvez pas deplacer ce bateau");
                    system("PAUSE");
                    goto dep;
                }

            }
            tabj1bas[li][col]=' ';
            tabj1bas[li+1][col]='G';
            infotab[bat][2]++;
        }
        if (or3==2) ///droite
        {
            for(t=col; t<col+1; t++)
            {
                if ((tabj1bas[li][t]!='G'||col>13)||tabj1bas[li][col+1]!=' ')
                {
                    printf("Vous ne pouvez pas deplacer ce bateau");
                    system("PAUSE");
                    goto dep;
                }

            }
            tabj1bas[li][col]=' ';
            tabj1bas[li][col+1]='G';
            infotab[bat][3]++;
        }
        if (or3==3) ///gauche
        {
            for(t=col; t<col+1; t++)
            {
                if ((tabj1bas[li][t]!='G'||col==0)||tabj1bas[li][col-1]!=' ')
                {
                    printf("Vous ne pouvez pas deplacer ce bateau");
                    system("PAUSE");
                    goto dep;
                }

            }
            tabj1bas[li][col-1]='G';
            tabj1bas[li][col]=' ';
            infotab[bat][3]--;

        }
        if (or3==4) ///haut
        {
            for(t=li; t<li+1; t++)
            {
                if ((tabj1bas[t][col]!='G'||li==0)||tabj1bas[li-1][col]!=' ')
                {
                    printf("Vous ne pouvez pas deplacer ce bateau");
                    system("PAUSE");
                    goto dep;
                }

            }
            tabj1bas[li-1][col]='G';
            tabj1bas[li][col]=' ';
            infotab[bat][2]--;

        }

        system("PAUSE");
    }
}

