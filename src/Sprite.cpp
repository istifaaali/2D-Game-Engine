
// #include<game-engine/main.h>
#include<SDL2/SDL.h>
#include<game-engine/Sprite.h>

Sprite::Sprite(const char* file_path, SDL_Renderer* r){
    this->texture = Texture(file_path, r);
    this->renderer = r;
};
Sprite::Sprite(){};

