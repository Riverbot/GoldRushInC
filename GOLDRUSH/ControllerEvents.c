    #include <SDL.h>
#include <stdlib.h>
#include "Character.h"

SDL_Event e;
float gravity = 0.5;

int EventsWorld(Character* c){
    c->vel_y += gravity;
    c->position.y += c->vel_y;
    c->position.x += c->vel_x;

    if (c->position.y > 500){
        c->position.y = 500;
        c->vel_y = 0;
        c->OnGround = 1;
    }
}

int ControllerEvents(Character* c){
    while(SDL_PollEvent(&e)){
        switch(e.type){
        case SDL_QUIT:
            SDL_Quit();
            exit(0);
            break;
        }

        if (e.type == SDL_KEYDOWN && e.key.repeat == 0){
            switch(e.key.keysym.sym){
                case SDLK_SPACE:
                    if (c->OnGround == 1)
                        c->vel_y = -12;
                        c->OnGround = 0;
                    break;
                case SDLK_a: c->vel_x = -3; break;
                case SDLK_d: c->vel_x =  3; break;
            }
        }

        else if (e.type == SDL_KEYUP && e.key.repeat == 0){
            switch(e.key.keysym.sym){
                case SDLK_a: c->vel_x = 0; break;
                case SDLK_d: c->vel_x = 0; break;
            }
        }
    }
}
