#include "biblio.h"
#define N 15


int main()
{

    int lig,col,para;

    int ty=0;
    int ty1=0;
    int*compt;
    char tabfusee[4][4];
    char tabj1haut[N][N];
    char tabj1bas[N][N];
    char tabj2haut[N][N];
    char tabj2bas[N][N];
    int infotab[11][3];
    int infoj2tab[11][3];
    int equi,j,vv,hh,ch;
    srand(time(NULL));
    restore(infotab,tabj1bas,tabj1haut,infoj2tab,tabj2bas,tabj2haut);
    //grille( tabj1haut,tabj1bas);
    //system("PAUSE");
    ch=menu();
    if(ch>=3)
        exit(EXIT_FAILURE);
    creatab(infotab,tabj1bas,tabj1haut,infoj2tab,tabj2bas,tabj2haut);


    equi=0;
    if (ch==0)
    {
        restore(infotab,tabj1bas,tabj1haut,infoj2tab,tabj2bas,tabj2haut);
        do{

            equi=0;
            system("cls");
            gotoligcol(1,1);
            player1();
            system("PAUSE");
            coule(infotab,tabj1bas,tabj2haut);
            grille( tabj1haut,tabj1bas);
            para=menuplayer1(tabj2bas,tabj1haut,tabj1bas,infotab,tabj2haut,tabfusee,&ty,infoj2tab);
            if (para==5)
                exit(EXIT_FAILURE);
            for(vv=0;vv<15;vv++){
                for(hh=0;hh<15;hh++){
                    if (tabj2bas[hh][vv]!=' '&&tabj2bas[hh][vv]!='X')
                        equi++;
                }
            }
            if (equi==0){
                player1();
                win();
                system("PAUSE");
                system("exit");}
            else if (equi!=0){
            equi=0;
            system("cls");
            gotoligcol(1,1);
            player2();
            system("PAUSE");
            coule(infoj2tab,tabj2bas,tabj1haut);
            grille( tabj2haut,tabj2bas);
            menuplayer2(tabj1bas,tabj2haut,tabj2bas,infoj2tab,tabj1haut,tabfusee,&ty1,infotab);
            for(vv=0;vv<15;vv++){
                for(hh=0;hh<15;hh++){
                    if (tabj1bas[hh][vv]!=' '&&tabj1bas[hh][vv]!='X')
                        equi++;
                }
            }
            if (equi==0){
                player2();
                win();
                system("PAUSE");
                system("exit");}
            }
    }while(equi!=0);
    }
    if (ch==2)
    {
        creatab(infotab,tabj1bas,tabj1haut,infoj2tab,tabj2bas,tabj2haut);
    do{

            equi=0;
            system("cls");
            gotoligcol(1,1);
            player1();
            system("PAUSE");
            coule(infotab,tabj1bas,tabj2haut);
            grille( tabj1haut,tabj1bas);
            para=menuplayer1(tabj2bas,tabj1haut,tabj1bas,infotab,tabj2haut,tabfusee,&ty,infoj2tab);
            if (para==5)
                exit(EXIT_FAILURE);
            for(vv=0;vv<15;vv++){
                for(hh=0;hh<15;hh++){
                    if (tabj2bas[hh][vv]!=' '&&tabj2bas[hh][vv]!='X')
                        equi++;
                }
            }
            if (equi==0){
                player1();
                win();
                system("PAUSE");
                system("exit");}
            else if (equi!=0){
            equi=0;
            system("cls");
            gotoligcol(1,1);
            player2();
            system("PAUSE");
            coule(infoj2tab,tabj2bas,tabj1haut);
            grille( tabj2haut,tabj2bas);
            menuplayer2(tabj1bas,tabj2haut,tabj2bas,infoj2tab,tabj1haut,tabfusee,&ty1,infotab);
            for(vv=0;vv<15;vv++){
                for(hh=0;hh<15;hh++){
                    if (tabj1bas[hh][vv]!=' '&&tabj1bas[hh][vv]!='X')
                        equi++;
                }
            }
            if (equi==0){
                player2();
                win();
                system("PAUSE");
                system("exit");}
            }
    }while(equi!=0);
    }
    if (ch==1){
        creatab(infotab,tabj1bas,tabj1haut,infoj2tab,tabj2bas,tabj2haut);
    do{
            equi=0;
            system("cls");
            gotoligcol(1,1);
            player1();
            system("PAUSE");
            coule(infotab,tabj1bas,tabj2haut);
            grille( tabj1haut,tabj1bas);
            menuplayer1(tabj2bas,tabj1haut,tabj1bas,infotab,tabj2haut,tabfusee,&ty,infoj2tab);
            for(vv=0;vv<15;vv++){
                for(hh=0;hh<15;hh++){
                    if (tabj2bas[hh][vv]!=' '&&tabj2bas[hh][vv]!='X')
                        equi++;
                }
            }
            if (equi==0){
                player1();
                win();
                system("PAUSE");
                system("exit");}
            else if (equi!=0){
            equi=0;
            niveaueasy(tabj1bas,tabj2haut,tabj2bas);
            coule(infoj2tab,tabj2bas,tabj1haut);

            for(vv=0;vv<15;vv++){
                for(hh=0;hh<15;hh++){
                    if (tabj1bas[hh][vv]!=' '&&tabj1bas[hh][vv]!='X')
                        equi++;
                }
            }
            if (equi==0){
                player2();
                win();
                system("PAUSE");
                system("exit");}
            }
    }while(equi!=0);
    }


}
