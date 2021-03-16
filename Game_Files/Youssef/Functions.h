#ifndef LIB_H_
#define LIB_H_
#include <SDL/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
typedef struct 
{
    SDL_Surface *Bg[50];
    SDL_Rect PosBg[50];
}enigme;
typedef struct 
{
    SDL_Rect Start;
    SDL_Rect End;
}square;


void afficherEnigme(enigme e, SDL_Surface * screen,int index);
void drawSign(square Pos,SDL_Surface * screen,SDL_Surface * check,SDL_Surface * cross, int table[4][4]);
void initTable();
square mouseClick(SDL_Event event, int xa1,
                  int xa2,
                  int xa3,
                  int xa4,
                  int ya1,
                  int yb1,
                  int yc1,
                  int yd1);
#endif