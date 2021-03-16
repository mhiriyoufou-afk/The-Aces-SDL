#include "Functions.h"
void afficherEnigme(enigme e, SDL_Surface *screen, int index)
{
    SDL_BlitSurface(e.Bg[index], NULL, screen, &(e).PosBg[index]);
}
void initTable(int table[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            table[i][j] = 0;
        }
    }
}
void drawSign(square Pos, SDL_Surface *screen, SDL_Surface *check, SDL_Surface *cross, int table[4][4])
{
    int x, y ;
    Pos.Start.h = 187;
    Pos.Start.w = 187;
    if (Pos.Start.x == 533)
        y = 0;
    {
        if (Pos.Start.y == 127)
            x = 0;
        else if (Pos.Start.y == 314)
            x = 1;
        else if (Pos.Start.y == 502)
            x = 2;
        else if (Pos.Start.y == 689)
            x = 3;
    }
    if (Pos.Start.x == 720)
        y = 1;
    {
        if (Pos.Start.y == 127)
            x = 0;
        else if (Pos.Start.y == 314)
            x = 1;
        else if (Pos.Start.y == 502)
            x = 2;
        else if (Pos.Start.y == 689)
            x = 3;
    }
    if (Pos.Start.x == 907)
        y = 2;
    {
        if (Pos.Start.y == 127)
            x = 0;
        else if (Pos.Start.y == 314)
            x = 1;
        else if (Pos.Start.y == 502)
            x = 2;
        else if (Pos.Start.y == 689)
            x = 3;
    }
    if (Pos.Start.x == 1094)
        y = 3;
    {
        if (Pos.Start.y == 127)
            x = 0;
        else if (Pos.Start.y == 314)
            x = 1;
        else if (Pos.Start.y == 502)
            x = 2;
        else if (Pos.Start.y == 689)
            x = 3;
    }
    if ((table[x][y]) == 0)
    {
        SDL_FillRect(screen, &Pos.Start, SDL_MapRGB(screen->format, 240, 240, 240));
        SDL_BlitSurface(cross, NULL, screen, &Pos.Start);
    }
    if (table[x][y] == 1)
    {
        SDL_FillRect(screen, &Pos.Start, SDL_MapRGB(screen->format, 240, 240, 240));
        SDL_BlitSurface(check, NULL, screen, &Pos.Start);
    }
    if (table[x][y] == 2)
    {
        SDL_FillRect(screen, &Pos.Start, SDL_MapRGB(screen->format, 240, 240, 240));
    }
    table[x][y]++;
    if (table[x][y] >= 3)
        table[x][y] = 0;
}
square mouseClick(SDL_Event event, int xa1,
                  int xa2,
                  int xa3,
                  int xa4,
                  int ya1,
                  int yb1,
                  int yc1,
                  int yd1)
{
    square Pos;
    if ((event.motion.y >= ya1) && (event.motion.y <= yb1))
    {
        if ((event.motion.x >= xa1) && (event.motion.x <= xa2))
        {
            Pos.Start.x = xa1;
            Pos.Start.y = ya1;
        }
        else if ((event.motion.x >= xa2) && (event.motion.x <= xa3))
        {
            Pos.Start.x = xa2;
            Pos.Start.y = ya1;
        }
        else if ((event.motion.x >= xa3) && (event.motion.x <= xa4))
        {
            Pos.Start.x = xa3;
            Pos.Start.y = ya1;
        }
        else if ((event.motion.x >= xa4) && (event.motion.x <= xa4 + 187))
        {
            Pos.Start.x = xa4;
            Pos.Start.y = ya1;
        }
    }
    if ((event.motion.y >= yb1) && (event.motion.y <= yc1))
    {
        if ((event.motion.x >= xa1) && (event.motion.x <= xa2))
        {
            Pos.Start.x = xa1;
            Pos.Start.y = yb1;
        }
        else if ((event.motion.x >= xa2) && (event.motion.x <= xa3))
        {
            Pos.Start.x = xa2;
            Pos.Start.y = yb1;
        }
        else if ((event.motion.x >= xa3) && (event.motion.x <= xa4))
        {
            Pos.Start.x = xa3;
            Pos.Start.y = yb1;
        }
        else if ((event.motion.x >= xa4) && (event.motion.x <= xa4 + 187))
        {
            Pos.Start.x = xa4;
            Pos.Start.y = yb1;
        }
    }
    if ((event.motion.y >= yc1) && (event.motion.y <= yd1))
    {
        if ((event.motion.x >= xa1) && (event.motion.x <= xa2))
        {
            Pos.Start.x = xa1;
            Pos.Start.y = yc1;
        }
        else if ((event.motion.x >= xa2) && (event.motion.x <= xa3))
        {
            Pos.Start.x = xa2;
            Pos.Start.y = yc1;
        }
        else if ((event.motion.x >= xa3) && (event.motion.x <= xa4))
        {
            Pos.Start.x = xa3;
            Pos.Start.y = yc1;
        }
        else if ((event.motion.x >= xa4) && (event.motion.x <= xa4 + 187))
        {
            Pos.Start.x = xa4;
            Pos.Start.y = yc1;
        }
    }
    if ((event.motion.y >= yd1) && (event.motion.y <= yd1 + 187))
    {
        if ((event.motion.x >= xa1) && (event.motion.x <= xa2))
        {
            Pos.Start.x = xa1;
            Pos.Start.y = yd1;
        }
        else if ((event.motion.x >= xa2) && (event.motion.x <= xa3))
        {
            Pos.Start.x = xa2;
            Pos.Start.y = yd1;
        }
        else if ((event.motion.x >= xa3) && (event.motion.x <= xa4))
        {
            Pos.Start.x = xa3;
            Pos.Start.y = yd1;
        }
        else if ((event.motion.x >= xa4) && (event.motion.x <= xa4 + 187))
        {
            Pos.Start.x = xa4;
            Pos.Start.y = yd1;
        }
    }
    return Pos;
}
void checkLine();