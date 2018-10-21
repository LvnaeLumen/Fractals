#include "stdafx.h"
#include "Graphics.h"
#include "Point.h"
#include <windows.h>

Graphics::Graphics()
{

	SDL_CreateWindowAndRenderer(1000, 600, 0,  &this->window, &this->renderer);
	SDL_SetWindowTitle(this->window, "Fractals");
	rendererColor();
	if (window == nullptr)
	{
		std::cout << "SDL Error while creating window" << std::endl;
		return;
	}
	

	if (renderer == nullptr)
	{
		std::cout << "SDL Error while creating renderer" << std::endl;
		return;
	}

	
	

	std::cout << "System OK" << std::endl;
}
void Graphics::putPoint(int currentSpeed)
{

	SDL_RenderClear(renderer);
	
		Point point;
		std::cout << point.x << "  |  " << point.y << std::endl;

		SDL_RenderDrawPoint(renderer, point.x, point.y);
	
	//Sleep(currentSpeed);
	SDL_RenderPresent(renderer);
}
void Graphics::putPoint(int x, int y)
{
	Point point(x, y);
	SDL_RenderDrawPoint(renderer, x, y);
}

void Graphics::rendererColor(int r, int g, int b)
{
	SDL_SetRenderDrawColor(renderer, r, g, b, 255);
}
void Graphics::rendererColor()
{
	SDL_SetRenderDrawColor(renderer, 30, 30, 100, 255);
}


SDL_Renderer* Graphics::getRenderer()
{
	return renderer;
}

SDL_Window* Graphics::getWindow()
{
	return window;
}

Graphics::~Graphics()
{
	//SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
}
