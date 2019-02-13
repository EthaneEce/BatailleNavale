#include "biblio.h"
int text,fond;
void color (int text, int fond){
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,fond*16+text);
}
void gotoligcol( int lig, int col )
{
// ressources
COORD mycoord;

mycoord.X = col;
mycoord.Y = lig;
SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), mycoord );
}

void aide()
{
    printf("Chaque joueur possede une flotte de 10 navires :\n -1 cuirasse \n -2 croiseurs \n -3 destroyers \n -4 sous-marins\n\n");
    printf("    Tirer:  Le joueur tire en choisissant les coordonnees d'une case valide de l'adversaire (grille numero 2). \n");
    printf("Chaque destroyer n'est muni que d'une seule fusée eclairante. Le premier tir d'un destroyer devoile \n");
    printf("un carre de 4*4 cases dans la grille adverse a partir du coin haut et gauche. Mais attention, les \n");
    printf("navires adverses de ce carre ne seront visibles que lors du tour du jeu (quelques secondes). Pour ");
    printf("couler un navire, il faut avoir touche toutes les cases qu'il occupe : un cuirasse est plus resistant\n");
    printf("qu'un simple destroyer,  les sous-marins ne peuvent être coules que par d'autres sous-marins. Dans\n");
    printf("ce cas, le navire adverse coule disparait et la case touchee s'affiche sur la grille numero 2.\n\n\n");
    printf("    Deplacer le navire d'une seule case sauf s'il est touche. Un navire ne peut pas se deplacer en \n");
    printf("diagonale. Il ne peut se deplacer que dans sa direction horizontale ou verticale, et d'une seule case \n");
    printf("a la fois, et le point cardinal de deplacement (est ou ouest s'il est horizontal, nord ou sud s'il est \n");
    printf("vertical). Evidemment, en cas d'obstacle (case de deplacement occupee par un autre navire ou le \n");
    printf("bord de la grille), un navire ne pourra pas effectuer son deplacement et devra tenter une nouvelle \n");
    printf("action.\n\n");

    system("PAUSE");

}

void bateau()
{
    color(13,0);
    printf("\n\n\n");
    printf(":::::::::      :::     :::::::::::     :::     ::::::::::: :::        :::        ::::::::::  \n");
    printf(":+:    :+:   :+: :+:       :+:       :+: :+:       :+:     :+:        :+:        :+:         \n");
    printf("+:+    +:+  +:+   +:+      +:+      +:+   +:+      +:+     +:+        +:+        +:+         \n");
    printf("+#++:++#+  +#++:++#++:     +#+     +#++:++#++:     +#+     +#+        +#+        +#++:++#    \n");
    printf("+#+    +#+ +#+     +#+     +#+     +#+     +#+     +#+     +#+        +#+        +#+         \n");
    printf("#+#    #+# #+#     #+#     #+#     #+#     #+#     #+#     #+#        #+#        #+#         \n");
    printf("#########  ###     ###     ###     ###     ### ########### ########## ########## ##########  \n");
    printf("                                                                 ::::    :::     :::     :::     :::     :::     :::        :::::::::: \n");
    printf("                                                                 :+:+:   :+:   :+: :+:   :+:     :+:   :+: :+:   :+:        :+:        \n");
    printf("                                                                 :+:+:+  +:+  +:+   +:+  +:+     +:+  +:+   +:+  +:+        +:+        \n");
    printf("                                                                 +#+ +:+ +#+ +#++:++#++: +#+     +:+ +#++:++#++: +#+        +#++:++#   \n");
    printf("                                                                 +#+  +#+#+# +#+     +#+  +#+   +#+  +#+     +#+ +#+        +#+        \n");
    printf("                                                                 #+#   #+#+# #+#     #+#   #+#+#+#   #+#     #+# #+#        #+#        \n");
    printf("                                                                 ###    #### ###     ###     ###     ###     ### ########## ########## \n");
    printf("\n\n");color(15,0);
    printf("                                                       )___(\n");
    printf("                                                _______/__/_\n");
    printf("                                         ___   /");color(13,0);printf("===========");color(15,0);printf("|   ___\n");
    printf("                        ____       __   [\\\]___/");color(15,1);printf("____________");color(15,0);printf("|__[///]   __\n");
    printf("                        |");color(15,8);printf("   ");color(15,0);printf("\\_____[\\]__/");color(15,1);printf("___________________________");color(15,0);printf("|__[//]___\n");
    printf("                         |");color(15,8);printf("                                                    ");color(15,0);printf("|\n");
    printf("                          |");color(15,8);printf("                                                  ");color(15,0);printf("/\n");
    color(9,0);
    printf("                       ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    color(15,0);
}


int menu()
{
    bateau();
    int set;
    int choix;
    printf("        1:Jouer une partie\n        2:Charger une partie\n        3:Aide\n        4:Quitter\n");
    scanf("%d",&choix);
    printf("\n\n");
    if (choix==1)
    {
        do
        {
            printf("Voulez vous jouer\n   1:Joueur VS Ordinateur\n   2:Joueur 1 VS Joueur 2\n");
            scanf("%d",&set);
            if (set!=1 && set!=2)
                printf("La valeur rentree n'est pas correcte, veuillez saisir un chiffre correspondant a un mode de jeu\n\n\n");

        }
        while((set!=1 && set!=2));
        return set;
    }
    if (choix==2)
    {
        return 0;
    }
    if(choix==3)
    {
        aide();
        menu();
    }
    if(choix>=4)
    {
        printf("Au revoir !\n\n");
        system("PAUSE");
    }


}

void grille(char tabj1haut[15][15],char tabj1bas[15][15])
{
    int hor,hor1,verti;
    printf("\n");
    printf("     VOTRE GRILLE :                                                              GRILLE CIBLE :\n");
    color(8,0);
    for(hor=0; hor<15; hor++)
    {
        printf("     -");
        for(verti=0; verti<15; verti++)
        {
            printf("----");
        }

        printf("               ");
        printf("-");
        for(verti=0; verti<15; verti++)
        {
            printf("----");
        }

        hor1=hor+1;
        printf("\n");
        if((hor+1)>9)
        {
            printf(" %d  ",hor1);
        }
        else if((hor+1)<=9)
        {
            printf("  %d  ",hor1);
        }


        for (verti=0; verti<15; verti++)
        {
            printf("| ");
            if(tabj1bas[hor][verti]=='G'){
                color(15,3);
            }
            if(tabj1bas[hor][verti]=='K'){
                color(10,0);
            }
            if(tabj1bas[hor][verti]=='A'){
                color(12,0);
            }
            if(tabj1bas[hor][verti]=='D'){
                color(14,0);
            }
            if(tabj1bas[hor][verti]=='X'){
                color(14,5);
            }
            printf("%c",tabj1bas[hor][verti]);
            color(8,0);
            printf(" ");
        }

        printf("|               ");
        for (verti=0; verti<15; verti++)
        {
            printf("| ");
            if(tabj1haut[hor][verti]=='X'){
                color(12,10);
            }
            if(tabj1haut[hor][verti]=='x'){
                color(10,12);
            }
            printf("%c",tabj1haut[hor][verti]);
            color(8,0);
            printf(" ");
        }
        printf("|   %d",hor1);
        printf("\n");
    }
    printf("     -");
    for(verti=0; verti<15; verti++)
    {
        printf("----");
    }
    printf("               ");
    printf("-");
    for(verti=0; verti<15; verti++)
    {
        printf("----");
    }
    printf("\n");
    printf("      ");
    for (verti=0; verti<15; verti++)
    {
        char carac='A'+verti;
        printf(" %c  ",carac);
    }
    printf("            ");

    printf("    ");
    for (verti=0; verti<15; verti++)
    {
        char carac='A'+verti;
        printf(" %c  ",carac);
    }
    printf("\n");
    color(15,0);
}

