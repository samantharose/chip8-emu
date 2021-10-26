#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_video.h>

#include "cpu.h"

#define COLOUR_WHITE 0xFFFFFFFF
#define COLOUR_BLACK 0x000000FF

#define SPRITE_LENGTH 5
#define SPRITE_ZERO 0
#define SPRITE_ONE (SPRITE_ZERO + SPRITE_LENGTH)
#define SPRITE_TWO (SPRITE_ONE + SPRITE_LENGTH)
#define SPRITE_THREE (SPRITE_TWO + SPRITE_LENGTH)
#define SPRITE_FOUR (SPRITE_THREE + SPRITE_LENGTH)
#define SPRITE_FIVE (SPRITE_FOUR + SPRITE_LENGTH)
#define SPRITE_SIX (SPRITE_FIVE + SPRITE_LENGTH)
#define SPRITE_SEVEN (SPRITE_SIX + SPRITE_LENGTH)
#define SPRITE_EIGHT (SPRITE_SEVEN + SPRITE_LENGTH)
#define SPRITE_NINE (SPRITE_EIGHT + SPRITE_LENGTH)
#define SPRITE_A (SPRITE_NINE + SPRITE_LENGTH)
#define SPRITE_B (SPRITE_A + SPRITE_LENGTH)
#define SPRITE_C (SPRITE_B + SPRITE_LENGTH)
#define SPRITE_D (SPRITE_C + SPRITE_LENGTH)
#define SPRITE_E (SPRITE_D + SPRITE_LENGTH)
#define SPRITE_F (SPRITE_E + SPRITE_LENGTH)

uint32_t* getPixelAt(int y, int x, SDL_Surface* surface);
void togglePixelAt(int y, int x, SDL_Surface* surface, struct cpu* cpu);
void renderSurface(SDL_Renderer* renderer, SDL_Surface* surface);