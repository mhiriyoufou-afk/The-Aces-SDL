#include "load.h"

void blit_images(SDL_Surface *screen, SDL_Surface *Bg_Image_1, SDL_Surface *Bg_Image_2, SDL_Surface *Bg_Image_3, SDL_Surface *Continue_Button, SDL_Surface *New_Button, SDL_Surface *Load_Button, SDL_Surface *Options_Button, SDL_Surface *Quit_Button, SDL_Rect continue_start,
                 SDL_Rect new_start,
                 SDL_Rect load_start,
                 SDL_Rect options_start,
                 SDL_Rect quit_start,
                 SDL_Rect Pos_Bg, SDL_Rect position, SDL_Surface *texte)
{
    SDL_BlitSurface(Bg_Image_1, NULL, screen, &Pos_Bg);
    //SDL_Flip(screen);
    SDL_BlitSurface(Continue_Button, NULL, screen, &continue_start);
    //SDL_Flip(screen);
    SDL_BlitSurface(New_Button, NULL, screen, &new_start);
    //SDL_Flip(screen);
    SDL_BlitSurface(Load_Button, NULL, screen, &load_start);
    //SDL_Flip(screen);
    SDL_BlitSurface(Options_Button, NULL, screen, &options_start);
    //SDL_Flip(screen);
    SDL_BlitSurface(Quit_Button, NULL, screen, &quit_start);
    SDL_BlitSurface(texte, NULL, screen, &position);
    SDL_Flip(screen);
    //SDL_Delay(1000);
    SDL_BlitSurface(Bg_Image_2, NULL, screen, &Pos_Bg);
    //SDL_Flip(screen);
    SDL_BlitSurface(Continue_Button, NULL, screen, &continue_start);
    //SDL_Flip(screen);
    SDL_BlitSurface(New_Button, NULL, screen, &new_start);
    //SDL_Flip(screen);
    SDL_BlitSurface(Load_Button, NULL, screen, &load_start);
    //SDL_Flip(screen);
    SDL_BlitSurface(Options_Button, NULL, screen, &options_start);
    //SDL_Flip(screen);
    SDL_BlitSurface(Quit_Button, NULL, screen, &quit_start);
    SDL_BlitSurface(texte, NULL, screen, &position);
    SDL_Flip(screen);
    //SDL_Delay(1000);
    SDL_BlitSurface(Bg_Image_3, NULL, screen, &Pos_Bg);
    //SDL_Flip(screen);
    SDL_BlitSurface(Continue_Button, NULL, screen, &continue_start);
    //SDL_Flip(screen);
    SDL_BlitSurface(New_Button, NULL, screen, &new_start);
    //SDL_Flip(screen);
    SDL_BlitSurface(Load_Button, NULL, screen, &load_start);
    //SDL_Flip(screen);
    SDL_BlitSurface(Options_Button, NULL, screen, &options_start);
    //SDL_Flip(screen);
    SDL_BlitSurface(Quit_Button, NULL, screen, &quit_start);
    SDL_BlitSurface(texte, NULL, screen, &position);
    SDL_Flip(screen);
    //SDL_Delay(1000);
}