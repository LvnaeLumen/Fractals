#pragma once

#include <iostream>
#include "SDL.h"

class Graphics
{
private:
	SDL_Window * window;
	SDL_Renderer *renderer;

public:
	Graphics();
	void putPoint(int currentSpeed);
	void putPoint(int x, int y);
	void rendererColor(int r, int g, int b);
	void rendererColor();
	SDL_Renderer* getRenderer();
	SDL_Window * getWindow();
	~Graphics();
	
};

