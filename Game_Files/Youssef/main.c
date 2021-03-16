#include "Functions.h"

int main()
{
    //Variables
    enigme e;
    e.Bg[0] = NULL;
    e.PosBg[0].x = 0;
    e.PosBg[0].y = 0;
    e.Bg[1] = NULL;
    e.PosBg[1].x = 0;
    e.PosBg[1].y = 0;
    e.Bg[2] = NULL;
    e.PosBg[2].x = 0;
    e.PosBg[2].y = 0;
    e.Bg[3] = NULL;
    e.PosBg[3].x = 0;
    e.PosBg[3].y = 0;
    e.Bg[4] = NULL;
    e.PosBg[4].x = 0;
    e.PosBg[4].y = 0;
    //Integers
    int Res_Width = 1920, Res_Length = 1080;
    int continuer = 1;
    int xa1 = 533;
    int xa2 = 720;
    int xa3 = 907;
    int xa4 = 1094;
    int ya1 = 127;
    int yb1 = 314;
    int yc1 = 502;
    int yd1 = 689;
    int table[4][4];
    //Positions
    square A1,A2,A3,A4,B1,B2,B3,B4,C1,C2,C3,C4,D1,D2,D3,D4,Pos;
    A1.Start.x = xa1;A1.Start.y = ya1;
    A1.End.x = xa2 - 2;A1.End.y = yb1 - 2;
    A2.Start.x = xa2 + 2;A2.Start.y = ya1;
    A2.End.x = xa3 - 2;A2.End.y = yb1 - 2;
    A3.Start.x = xa3 + 2;A3.Start.y = ya1;
    A3.End.x = xa4 - 2;A3.End.y = yb1 - 2;
    A4.Start.x = xa4 + 2;A4.Start.y = ya1;
    A4.End.x = xa4 + 187;A4.End.y = yb1 - 2;
    B1.Start.x = xa1 ;B1.Start.y = yb1 + 2;
    B1.End.x = xa2 - 2;B1.End.y = yc1 - 2;
    B2.Start.x = xa2 + 2;B2.Start.y = yb1 + 2;
    B2.End.x = xa3 -2;B2.End.y = yc1 - 2;
    B3.Start.x = xa3 + 2;B3.Start.y = yb1 + 2;
    B3.End.x = xa4 - 2;B3.End.y = yc1 - 2;
    B4.Start.x = xa4 + 2;B4.Start.y = yb1 + 2;
    B4.End.x = xa4 + 187;B4.End.y = yc1 - 2;
    C1.Start.x = xa1;C1.Start.y = yc1 + 2;
    C1.End.x = xa2 - 2;C1.End.y = yd1 - 2;
    C2.Start.x = xa2 + 2;C2.Start.y = yc1 + 2;
    C2.End.x = xa3 - 2;C2.End.y = yd1 - 2;
    C3.Start.x = xa3 + 2;C3.Start.y = yc1 + 2;
    C3.End.x = xa4 - 2;C3.End.y = yd1 - 2;
    C4.Start.x = xa4 + 2;C4.Start.y = yc1 + 2;
    C4.End.x = xa4 + 187;C4.End.y = yd1 - 2;
    D1.Start.x = xa1;D1.Start.y = yd1 + 2;
    D1.End.x = xa2 - 2;D1.End.y = yd1 + 187;
    D2.Start.x = xa2 + 2;D2.Start.y = yd1 + 2;
    D2.End.x = xa3 - 2;D2.End.y = yd1 + 187;
    D3.Start.x = xa3 + 2;D3.Start.y = yd1 + 2;
    D3.End.x = xa4 - 2;D3.End.y = yd1 + 187;
    D4.Start.x = xa4 + 2;D4.Start.y = yd1 + 2;
    D4.End.x = xa4 + 187;D4.End.y = yd1 + 187;
    
    //Surfaces
    SDL_Surface *screen = NULL;
    SDL_Surface * Check_Button = NULL;
    SDL_Surface * Cross_Button = NULL;
    //Event
    SDL_Event event;
    //Color
    SDL_Color white = {255,255,255};
    //Initialisation
    SDL_Init(SDL_INIT_VIDEO);
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        printf("Unuable to initialize SDL: %s \n", SDL_GetError());
        return 1;
    }
    //Loading
    screen = SDL_SetVideoMode(Res_Width, Res_Length, 32, SDL_HWSURFACE | SDL_DOUBLEBUF | SDL_RESIZABLE);
    e.Bg[0] = IMG_Load("Assets/Images/Neutral.png");
    e.Bg[1] = IMG_Load("Assets/Images/First_done.png");
    e.Bg[2] = IMG_Load("Assets/Images/Second_done.png");
    e.Bg[3] = IMG_Load("Assets/Images/First_wrong.png");
    e.Bg[4] = IMG_Load("Assets/Images/Second_wrong.png");
    Check_Button = IMG_Load("Assets/Images/Check.png");
    Cross_Button = IMG_Load("Assets/Images/Cross.png");
    SDL_FillRect(screen, NULL,SDL_MapRGB(screen->format, 240, 240, 240));
    initTable(table);
    //Game Loop
    while (continuer)
    {
        afficherEnigme(e, screen,0);
        SDL_Flip(screen);
        while (SDL_PollEvent(&event))
        {
            switch (event.type)
            {
            case (SDL_QUIT):
                continuer = 0;
                break;
            case (SDL_MOUSEBUTTONDOWN):
                Pos = mouseClick(event,xa1,xa2,xa3,xa4,ya1,yb1,yc1,yd1);
                drawSign(Pos,screen,Check_Button,Cross_Button,table);
                break;
            }
        }
    }
    return 0;
}
