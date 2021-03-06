#include "First_Page.h"
#include "Second_Page.h"
int main()
{
   //Declaration de variables;

   //Variables
   int check = 0;
   int continuer = 1;
   int full_check = 0;
   int Res_Width = 1920;
   int Res_Length = 1080;
   int selected_button = 0;
   //Variables

   //Background
   SDL_Surface *screen = NULL;
   SDL_Surface *Bg_Image_1 = NULL, *Bg_Image_2 = NULL, *Bg_Image_3;
   //Background

   //Buttons
   SDL_Surface *Continue_Button = NULL;
   SDL_Surface *Continue_Button_h = NULL;
   SDL_Surface *Continue_Button_nh = NULL;
   SDL_Surface *New_Button = NULL;
   SDL_Surface *New_Button_h = NULL;
   SDL_Surface *New_Button_nh = NULL;
   SDL_Surface *Load_Button = NULL;
   SDL_Surface *Load_Button_h = NULL;
   SDL_Surface *Load_Button_nh = NULL;
   SDL_Surface *Options_Button = NULL;
   SDL_Surface *Options_Button_h = NULL;
   SDL_Surface *Options_Button_nh = NULL;
   SDL_Surface *Quit_Button = NULL;
   SDL_Surface *Quit_Button_h = NULL;
   SDL_Surface *Quit_Button_nh = NULL;

   //Buttons

   //Button Coordinates
   SDL_Rect continue_start, continue_end;
   SDL_Rect new_start, new_end;
   SDL_Rect load_start, load_end;
   SDL_Rect options_start, options_end;
   SDL_Rect quit_start, quit_end;
   continue_start.x = 194, continue_end.x = 461;
   continue_start.y = 155, continue_end.y = 254;
   new_start.x = 194, new_end.x = 534;
   new_start.y = 305, new_end.y = 425;
   load_start.x = 194, load_end.x = 526;
   load_start.y = 455, load_end.y = 574;
   options_start.x = 194, options_end.x = 426;
   options_start.y = 605, options_end.y = 724;
   quit_start.x = 194, quit_end.x = 320;
   quit_start.y = 755, quit_end.y = 874;
   //Button Coordinates

   //Positions
   SDL_Rect Pos_Bg;
   Pos_Bg.x = 0;
   Pos_Bg.y = 0;
   //Positions

   //Events
   SDL_Event event;
   //Events

   //Sound
   Mix_Music *music;
   Mix_Chunk *select_sound;
   Mix_Chunk *click_sound;
   //Sound

   //Volume
   int Volume = 80;
   //Volume

   //Declaration de variables;

   //Initialisation video
   SDL_Init(SDL_INIT_VIDEO);

   if (SDL_Init(SDL_INIT_VIDEO) != 0)
   {
      printf("Unuable to initialize SDL: %s \n", SDL_GetError());
      return 1;
   }
   //Initialisation video
   //Texte
   TTF_Font *police = NULL;
   SDL_Surface *texte = NULL;
   SDL_Rect position_texte;
   SDL_Color couleurnoire = {0, 0, 0};
   TTF_Init();
   police = TTF_OpenFont("Assets/Fonts/Candara.ttf", 18);
   texte = TTF_RenderText_Blended(police, "(c) copyright, all rights reserved. THE ACES.", couleurnoire);
   position_texte.x = 1000;
   position_texte.y = 900;

   //Load Images
   screen = SDL_SetVideoMode(Res_Width, Res_Length, 32, SDL_HWSURFACE | SDL_DOUBLEBUF | SDL_RESIZABLE);
   Bg_Image_1 = IMG_Load("Assets/Images/Backgrounds/first.png");
   Bg_Image_2 = IMG_Load("Assets/Images/Backgrounds/second.png");
   Bg_Image_3 = IMG_Load("Assets/Images/Backgrounds/third.png");
   Continue_Button = IMG_Load("Assets/Images/UI/Continue0.png");
   Continue_Button_nh = IMG_Load("Assets/Images/UI/Continue0.png");
   Continue_Button_h = IMG_Load("Assets/Images/UI/Continue1.png");
   New_Button = IMG_Load("Assets/Images/UI/New.png");
   New_Button_nh = IMG_Load("Assets/Images/UI/New.png");
   New_Button_h = IMG_Load("Assets/Images/UI/New1.png");
   Load_Button = IMG_Load("Assets/Images/UI/Load.png");
   Load_Button_nh = IMG_Load("Assets/Images/UI/Load.png");
   Load_Button_h = IMG_Load("Assets/Images/UI/Load1.png");
   Options_Button = IMG_Load("Assets/Images/UI/Options.png");
   Options_Button_nh = IMG_Load("Assets/Images/UI/Options.png");
   Options_Button_h = IMG_Load("Assets/Images/UI/Options1.png");
   Quit_Button = IMG_Load("Assets/Images/UI/Quit.png");
   Quit_Button_nh = IMG_Load("Assets/Images/UI/Quit.png");
   Quit_Button_h = IMG_Load("Assets/Images/UI/Quit1.png");
   //Load Images

   //Initialisation son
   if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 1024) == -1)
   {
      printf("%s", Mix_GetError());
   }
   music = Mix_LoadMUS("Assets/Audio/Music/Music.mp3");
   click_sound = Mix_LoadWAV("Assets/Audio/SFX/clickk.wav");
   select_sound = Mix_LoadWAV("Assets/Audio/SFX/Select.wav");
   Mix_PlayMusic(music, -1);
   //Initialisation son

   //Main Loop
   while (continuer)
   {
      switch (check)
      {
      case 0:

         //Animation Background
         blit_images(screen, Bg_Image_1, Bg_Image_2, Bg_Image_3, Continue_Button, New_Button, Load_Button, Options_Button, Quit_Button, continue_start,
                     new_start,
                     load_start,
                     options_start,
                     quit_start,
                     Pos_Bg, position_texte, texte);
         //Animation Background

         while (SDL_PollEvent(&event))
         {
            switch (event.type)
            {
            case (SDL_QUIT):
               continuer = 0;
               break;
            case (SDL_MOUSEMOTION):
            {
               mouse_sound(continue_start, continue_end,
                                new_start, new_end,
                                load_start, load_end,
                                options_start, options_end,
                                quit_start, quit_end, 
                                Continue_Button,
                                Continue_Button_h,
                                Continue_Button_nh,
                                New_Button,
                                New_Button_h,
                                New_Button_nh,
                                Load_Button,
                                Load_Button_h,
                                Load_Button_nh,
                                Options_Button,
                                Options_Button_h,
                                Options_Button_nh,
                                Quit_Button,
                                Quit_Button_h,
                                Quit_Button_nh,
                                event,
                                select_sound);
               break;
            }
            case SDL_MOUSEBUTTONDOWN:
            {
               mouse_click(event,  continue_start,  continue_end,
                  new_start,  new_end,
                  load_start,  load_end,
                  options_start,  options_end,
                  quit_start,  quit_end, click_sound,&check,&continuer);
            }
            case (SDL_KEYDOWN):
            {
               switch (event.key.keysym.sym)
               {
               case SDLK_UP:
                  selected_button--;
                  if (selected_button < 1)
                     selected_button = 4;
                  break;
               case SDLK_DOWN:
                  selected_button++;
                  if (selected_button > 4)
                     selected_button = 1;
                  break;
               case (SDLK_ESCAPE):
                  continuer = 0;
                  break;
               case (SDLK_RETURN):
                  if (selected_button == 3)
                     check = 1;
                  if (selected_button == 4)
                     continuer = 0;
                  break;
               }
            }
               keyboard_select(selected_button,select_sound,Continue_Button,
                 Continue_Button_h,
                 Continue_Button_nh,
                 New_Button,
                 New_Button_h,
                 New_Button_nh,
                 Load_Button,
                 Load_Button_h,
                 Load_Button_nh,
                 Options_Button,
                 Options_Button_h,
                 Options_Button_nh,
                 Quit_Button,
                 Quit_Button_h,
                 Quit_Button_nh);
            }
         }
         break;
      case 1:
         //Interface Option
         SDL_BlitSurface(Bg_Image_1, NULL, screen, &Pos_Bg);
         SDL_Flip(screen);
         while (SDL_PollEvent(&event))
         {
            switch (event.type)
            {
            case (SDL_QUIT):
               continuer = 0;
               break;

            case (SDL_KEYDOWN):
               switch (event.key.keysym.sym)
               {
               case (SDLK_q):
                  continuer = 0;
                  break;
               case (SDLK_BACKSPACE):
                  Mix_PlayChannel(-1, click_sound, 0);
                  check = 0;
                  break;
               case SDLK_UP:
                  Mix_VolumeMusic(Volume += 10);
                  break;
               case SDLK_DOWN:
                  Mix_VolumeMusic(Volume -= 10);
                  break;
               case (SDLK_ESCAPE):
                  continuer = 0;
                  break;
               case (SDLK_f):
                  if (full_check == 0)
                  {
                     screen = SDL_SetVideoMode(Res_Width, Res_Length, 32, SDL_HWSURFACE | SDL_DOUBLEBUF | SDL_FULLSCREEN);
                     full_check = 1;
                  }
                  else
                  {
                     screen = SDL_SetVideoMode(Res_Width, Res_Length, 32, SDL_HWSURFACE | SDL_DOUBLEBUF | SDL_RESIZABLE);
                     full_check = 0;
                  }
               }
               break;
            }
            break;
         }
      }
      //Main loop
   }
   return 0;
}