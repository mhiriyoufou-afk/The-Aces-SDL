#ifndef LIB_H_
#define LIB_H_
#include <SDL/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>

void blit_images(SDL_Surface *screen, SDL_Surface *Bg_Image_1, SDL_Surface *Bg_Image_2, SDL_Surface *Bg_Image_3, SDL_Surface *Continue_Button, SDL_Surface *New_Button, SDL_Surface *Load_Button, SDL_Surface *Options_Button, SDL_Surface *Quit_Button, SDL_Rect continue_start,
                 SDL_Rect new_start,
                 SDL_Rect load_start,
                 SDL_Rect options_start,
                 SDL_Rect quit_start,
                 SDL_Rect Pos_Bg, SDL_Rect position, SDL_Surface *texte);

void mouse_sound(SDL_Rect continue_start, SDL_Rect continue_end,
                 SDL_Rect new_start, SDL_Rect new_end,
                 SDL_Rect load_start, SDL_Rect load_end,
                 SDL_Rect options_start, SDL_Rect options_end,
                 SDL_Rect quit_start, SDL_Rect quit_end,
                 SDL_Surface *Continue_Button,
                 SDL_Surface *Continue_Button_h,
                 SDL_Surface *Continue_Button_nh,
                 SDL_Surface *New_Button,
                 SDL_Surface *New_Button_h,
                 SDL_Surface *New_Button_nh,
                 SDL_Surface *Load_Button,
                 SDL_Surface *Load_Button_h,
                 SDL_Surface *Load_Button_nh,
                 SDL_Surface *Options_Button,
                 SDL_Surface *Options_Button_h,
                 SDL_Surface *Options_Button_nh,
                 SDL_Surface *Quit_Button,
                 SDL_Surface *Quit_Button_h,
                 SDL_Surface *Quit_Button_nh,
                 SDL_Event event,
                 Mix_Chunk *select_sound);
void keyboard_select(int selected_button, Mix_Chunk *select_sound, SDL_Surface *Continue_Button,
                     SDL_Surface *Continue_Button_h,
                     SDL_Surface *Continue_Button_nh,
                     SDL_Surface *New_Button,
                     SDL_Surface *New_Button_h,
                     SDL_Surface *New_Button_nh,
                     SDL_Surface *Load_Button,
                     SDL_Surface *Load_Button_h,
                     SDL_Surface *Load_Button_nh,
                     SDL_Surface *Options_Button,
                     SDL_Surface *Options_Button_h,
                     SDL_Surface *Options_Button_nh,
                     SDL_Surface *Quit_Button,
                     SDL_Surface *Quit_Button_h,
                     SDL_Surface *Quit_Button_nh);
void mouse_click(SDL_Event event, SDL_Rect continue_start, SDL_Rect continue_end,
                 SDL_Rect new_start, SDL_Rect new_end,
                 SDL_Rect load_start, SDL_Rect load_end,
                 SDL_Rect options_start, SDL_Rect options_end,
                 SDL_Rect quit_start, SDL_Rect quit_end, Mix_Chunk *click_sound,int *check,int *continuer);
#endif