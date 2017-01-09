#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>
#include "Global.h"
#include "Character.h"
#include "ControllerEvents.h"
#include "ControllerAnimation.h"
#undef main

int Render_Image(Image* i, SDL_Rect pos){
    SDL_RenderCopy(renderer, i->texture, &i->imgPos, &pos);
}

int main(){
    SDL_Init(SDL_INIT_EVERYTHING);

    SDL_Window* window = SDL_CreateWindow("G O L D   R U S H", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1280, 720, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, 0);

    Character* rogue = Character_new("image/rogue16x32.png");

    while (1){

        ControllerEvents(rogue);

        EventsWorld(rogue);

        SDL_RenderClear(renderer);

        ControllerAnimation(rogue->image);

        Render_Image(rogue->image, rogue->position);

        SDL_RenderPresent(renderer);

        SDL_Delay(18);
    }
}
