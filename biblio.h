#ifndef BIBLIO_H_INCLUDED
#define BIBLIO_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<time.h>
#include <windows.h>
#define N 15

void color (int text, int fond);///source Ernest sur whatsapp
void gotoligcol( int lig, int col );///source campus
int menu();///toutes les ecritures géantes http://www.messletters.com/en/big-text/
void aide();
void bateau();

void grille(char tabj1haut[15][15],char tabj1bas[15][15]);

void remptab (int infotab[11][3],char tabj1bas[N][N]);
void cuirasse(int infotab[11][3],char tabj1bas[N][N]);
int croiseur(int infotab[11][3],char tabj1bas[N][N]);
int destroyer(int infotab[11][3],char tabj1bas[N][N]);


void creatab(int infotab[11][3],char tabj1bas[N][N],char tabj1haut[N][N],int infoj2tab[10][3],char tabj2bas[N][N],char tabj2haut[N][N]);
void tircuirasser(char tabj1bas[N][N],char tabj2haut[N][N]);
void tirdestroyer(char tabj1bas[N][N],char tabj2haut[N][N]);
void tircroiseur(char tabj1bas[N][N],char tabj2haut[N][N]);
int asktire(char tabj1bas[N][N],char tabj2haut[N][N],char tabj2bas[N][N],char tabfusee[4][4],char tabj1haut[N][N],int**to);

int tirfusee(char tabfusee[4][4],char tabj1haut[N][N],char tabj2bas[N][N],char tabj1bas[N][N]);


int menuplayer1(char tabj2bas[15][15],char tabj1haut[15][15],char tabj1bas[15][15],int infotab[11][3],char tabj2haut[15][15],char tabfusee[4][4],int*ty,int infoj2tab[11][3]);
int menuplayer2(char tabj1bas[15][15],char tabj2haut[15][15],char tabj2bas[15][15],int infoj2tab[11][3],char tabj1haut[15][15],char tabfusee[4][4],int*ty1,int infotab[11][3]);

void player1();
void player2();
void win();

void coule(int infotab[11][3],char tabj1bas[15][15],char tabj2haut[15][15]);

void niveaueasy(char tabj1bas[N][N],char tabj2haut[N][N],char tabj2bas[N][N]);

void sauvegarde(int infotab[11][3],char tabj1bas[N][N],char tabj1haut[N][N],int infoj2tab[10][3],char tabj2bas[N][N],char tabj2haut[N][N]);
void restore(int infotab[11][3],char tabj1bas[N][N],char tabj1haut[N][N],int infoj2tab[10][3],char tabj2bas[N][N],char tabj2haut[N][N]);



#endif // BIBLIO_H_INCLUDED
