#include <SDL.h>
#include <SDL_image.h>
#include <stdlib.h>
#include "Global.h"
#include "ControllerImage.h"

int a = 0;
Image* Image_new(const char* path){
    Image* i = (Image*)malloc(sizeof(Image));

    SDL_Surface* s = IMG_Load(path);
    i->texture = SDL_CreateTextureFromSurface(renderer, s);

    i->imgPos.w = 32;
    i->imgPos.h = 32;

    return i;
}



