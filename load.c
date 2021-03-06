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
                 Mix_Chunk *select_sound)
{
    if ((event.motion.x >= continue_start.x) && (event.motion.x <= continue_end.x) && (event.motion.y >= continue_start.y) && (event.motion.y <= continue_end.y))
    {
        //Mix_PlayChannel(-1, select_sound, 0);
        //Continue_Button = Continue_Button_h;
    }
    else
    {
        //Continue_Button = Continue_Button_nh;
    }

    if ((event.motion.x >= new_start.x) && (event.motion.x <= new_end.x) && (event.motion.y) >= (new_start.y) && (event.motion.y) <= (new_end.y))
    {
        Mix_PlayChannel(-1, select_sound, 0);
        *New_Button = *New_Button_h;
    }
    else
    {
        *New_Button = *New_Button_nh;
    }

    if ((event.motion.x) >= (load_start.x) && (event.motion.x) <= (load_end.x) && (event.motion.y) >= (load_start.y) && (event.motion.y) <= (load_end.y))
    {
        Mix_PlayChannel(-1, select_sound, 0);
        *Load_Button = *Load_Button_h;
    }
    else
    {
        *Load_Button = *Load_Button_nh;
    }

    if ((event.motion.x) >= (options_start.x) && (event.motion.x) <= (options_end.x) && (event.motion.y) >= (options_start.y) && (event.motion.y) <= (options_end.y))
    {
        Mix_PlayChannel(-1, select_sound, 0);
        *Options_Button = *Options_Button_h;
    }
    else
    {
        *Options_Button = *Options_Button_nh;
    }
    if ((event.motion.x) >= (quit_start.x) && (event.motion.x) <= (quit_end.x) && (event.motion.y) >= (quit_start.y) && (event.motion.y) <= (quit_end.y))
    {
        Mix_PlayChannel(-1, select_sound, 0);
        *Quit_Button = *Quit_Button_h;
    }
    else
    {
        *Quit_Button = *Quit_Button_nh;
    }
}
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
                     SDL_Surface *Quit_Button_nh)
{
    if (selected_button == 1)
    {
        Mix_PlayChannel(-1, select_sound, 0);
        *New_Button = *New_Button_h;
    }
    else
    {
        *New_Button = *New_Button_nh;
    }
    if (selected_button == 2)
    {
        Mix_PlayChannel(-1, select_sound, 0);
        *Load_Button = *Load_Button_h;
    }
    else
    {
        *Load_Button = *Load_Button_nh;
    }
    if (selected_button == 3)
    {
        Mix_PlayChannel(-1, select_sound, 0);
        *Options_Button = *Options_Button_h;
    }
    else
    {
        *Options_Button = *Options_Button_nh;
    }
    if (selected_button == 4)
    {
        Mix_PlayChannel(-1, select_sound, 0);
        *Quit_Button = *Quit_Button_h;
    }
    else
    {
        *Quit_Button = *Quit_Button_nh;
    }
}
void mouse_click(SDL_Event event, SDL_Rect continue_start, SDL_Rect continue_end,
                 SDL_Rect new_start, SDL_Rect new_end,
                 SDL_Rect load_start, SDL_Rect load_end,
                 SDL_Rect options_start, SDL_Rect options_end,
                 SDL_Rect quit_start, SDL_Rect quit_end, Mix_Chunk *click_sound,int *check,int *continuer)
{
    if ((event.motion.x) >= (continue_start.x) && (event.motion.x) <= (continue_end.x) && (event.motion.y) >= (continue_start.y) && (event.motion.y) <= (continue_end.y) || (event.motion.x) >= (new_start.x) && (event.motion.x) <= (new_end.x) && (event.motion.y) >= (new_start.y) && (event.motion.y) <= (new_end.y) || (event.motion.x) >= (load_start.x) && (event.motion.x) <= (load_end.x) && (event.motion.y) >= (load_start.y) && (event.motion.y) <= (load_end.y) || (event.motion.x) >= (options_start.x) && (event.motion.x) <= (options_end.x) && (event.motion.y) >= (options_start.y) && (event.motion.y) <= (options_end.y) || (event.motion.x) >= (quit_start.x) && (event.motion.x) <= (quit_end.x) && (event.motion.y) >= (quit_start.y) && (event.motion.y) <= (quit_end.y))
        if (event.button.button = SDL_BUTTON_LEFT)
        {
            Mix_PlayChannel(-1, click_sound, 0);
        }
    if ((event.motion.x) >= (options_start.x) && (event.motion.x) <= (options_end.x) && (event.motion.y) >= (options_start.y) && (event.motion.y) <= (options_end.y))
    {
        if (event.button.button = SDL_BUTTON_LEFT)
        {
            *check = 1;
        }
    }
    if ((event.motion.x) >= (quit_start.x) && (event.motion.x) <= (quit_end.x) && (event.motion.y) >= (quit_start.y) && (event.motion.y) <= (quit_end.y))
    {
        if (event.button.button = SDL_BUTTON_LEFT)
            *continuer = 0;
    }
}