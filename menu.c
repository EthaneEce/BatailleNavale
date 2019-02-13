#include "biblio.h"

int menuplayer1(char tabj2bas[15][15],char tabj1haut[15][15],char tabj1bas[15][15],int infotab[11][3],char tabj2haut[15][15],char tabfusee[4][4],int*ty,int infoj2tab[11][3])
{
    int choix;
    int*to;
    printf("Que voulez vous faire ?\n 1: Tirer\n 2: Deplacer un bateau(non touche)\n 3: Aide\n 4: Sauvegarder\n 5: Quitter la partie\n");
    scanf("%d",&choix);


    if (choix==1){
        to=ty;
        *ty=*ty+asktire(tabj2bas,tabj1haut,tabj1bas,tabfusee,tabj1haut,&to);}

    if(choix==2)
        deplacement(infotab,tabj1bas,tabj2haut);
    if(choix==3){
        aide();
        menuplayer1(tabj2bas,tabj1haut,tabj1bas,infotab,tabj2haut,tabfusee,&to,infoj2tab);
    }
    if(choix==4)
    {
        sauvegarde(infotab,tabj1bas,tabj1haut,infoj2tab,tabj2bas,tabj2haut);
        menuplayer1(tabj2bas,tabj1haut,tabj1bas,infotab,tabj2haut,tabfusee,&to,infoj2tab);
    }
    if(choix==5)
        return choix;
    if(choix>5)
        menuplayer1(tabj2bas,tabj1haut,tabj1bas,infotab,tabj2haut,tabfusee,&to,infoj2tab);

}




int menuplayer2(char tabj1bas[15][15],char tabj2haut[15][15],char tabj2bas[15][15],int infoj2tab[11][3],char tabj1haut[15][15],char tabfusee[4][4],int*ty1,int infotab[11][3])
{

    int choix;
    int*to;
    printf("Que voulez vous faire ?\n 1: Tirer\n 2: Deplacer un bateau(non touche)\n 3: Aide\n 4: Sauvegarder\n 5: Quitter la partie\n");
    scanf("%d",&choix);
    if (choix==1){
        to=ty1;
        *ty1=*ty1+asktire(tabj1bas,tabj2haut,tabj2bas,tabfusee,tabj2haut,&to);}
    if(choix==2)
        deplacement(infoj2tab,tabj2bas,tabj1haut);
    if(choix==3)
    {
        aide();
        menuplayer2(tabj1bas,tabj2haut,tabj2bas,infoj2tab,tabj1haut,tabfusee,&to,infotab);
    }
    if(choix==4)
    {
        sauvegarde(infotab,tabj1bas,tabj1haut,infoj2tab,tabj2bas,tabj2haut);
        menuplayer2(tabj1bas,tabj2haut,tabj2bas,infoj2tab,tabj1haut,tabfusee,&to,infotab);
    }

    if(choix==5)
        return choix;
    if(choix>5)
        menuplayer2(tabj1bas,tabj2haut,tabj2bas,infoj2tab,tabj1haut,tabfusee,&to,infotab);

}



