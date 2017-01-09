#pragma once
#include <SDL_image.h>

typedef struct {
    SDL_Rect imgPos;
    SDL_Texture* texture;
} Image;

Image* Image_new();
