#include "ControllerImage.h"

int spacing = 32;
float fps = 5;

int IdleAnimation(Image* i) {
	i->imgPos.x += spacing;
	i->imgPos.y = 0;

	if(i->imgPos.x > 288){
		i->imgPos.x = 0;
	}
}

int WalkAnimation(Image* i) {
	i->imgPos.x += spacing;
	i->imgPos.y = 64;

	if(i->imgPos.x > 288){
		i->imgPos.x = 0;
	}
}

int ControllerAnimation(Image* i){
    IdleAnimation(i);
    WalkAnimation(i);
}
