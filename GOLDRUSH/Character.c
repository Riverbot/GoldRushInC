#include <SDL.h>
#include <stdlib.h>
#include "Character.h"
#include "ControllerImage.h"
#include "Character.h"

Character* Character_new(const char* path){
    Character* c = (Character*)malloc(sizeof(Character));

    c->image = Image_new(path);
    c->position.x = 0;
    c->position.y = 0;
    c->position.w = 96;
    c->position.h = 96;
    c->vel_x = 0;

    return c;
}
