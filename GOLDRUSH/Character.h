#include "ControllerImage.h"
#pragma once

typedef struct Character{
    int OnGround;
    float vel_x;
    float vel_y;
    SDL_Rect position;
    Image* image;
} Character;
