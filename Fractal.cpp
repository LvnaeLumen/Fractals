#include "stdafx.h"
#include "Fractal.h"
#include "Graphics.h"

#include "KeyOperational.h"


Fractal::Fractal()
{
	drawingspeed = 1000;	
}
Fractal::Fractal(int drawingSpeed)
{
	drawingspeed = drawingSpeed;
}
float Fractal::minF(int elTime, int mxTime)
{
	if (elTime >= mxTime)
	{
		return elTime;
	}
	else
	{
		return mxTime;
	}
}
void Fractal::DrawRandomFractal()
{
	SDL_Init(SDL_INIT_EVERYTHING);

	Graphics desk;
	KeyOperational kk;
	SDL_Event event;
	int x, y;

	int LAST_UPDATE_TIME = SDL_GetTicks();
	
	while (true)
	{
		kk.beginNewFrame();
		//desk.putPoint(drawingspeed);
		
		if (SDL_PollEvent(&event))
		{	
			if (event.type == SDL_KEYDOWN)
			{
				if (event.key.repeat == 0)
				{
					kk.keyDownEvent(event);
				}
			}
			else if (event.type = SDL_KEYUP)
			{
				kk.keyUpEvent(event);
			}
			else if (event.type = SDL_QUIT)
			{
				return;
			}
			if (kk.wasKeyPressed(SDL_SCANCODE_ESCAPE))
			{
				return;
			}			
		}
		desk.rendererColor();
		SDL_RenderClear(desk.getRenderer());
		desk.rendererColor(255, 255, 255);
		SDL_RenderDrawPoint(desk.getRenderer(), 100, 100);
		SDL_RenderDrawPoint(desk.getRenderer(), 100, 200);
		SDL_RenderDrawPoint(desk.getRenderer(), 100, 200);
		SDL_RenderDrawPoint(desk.getRenderer(), 200, 200);
		SDL_RenderDrawPoint(desk.getRenderer(), 300, 200);
		SDL_RenderDrawPoint(desk.getRenderer(), 400, 200);

		SDL_RenderDrawPoint(desk.getRenderer(), 101, 200);
		SDL_RenderDrawPoint(desk.getRenderer(), 102, 200);
		SDL_RenderDrawPoint(desk.getRenderer(), 103, 200);
		SDL_RenderDrawPoint(desk.getRenderer(), 104, 200);
		SDL_RenderDrawPoint(desk.getRenderer(), 105, 200);
		SDL_RenderDrawPoint(desk.getRenderer(), 106, 200);
		//SDL_RenderDraw

		
		SDL_RenderPresent(desk.getRenderer());


		//стабильное количество кадров в секунду
		//const int CURRENT_TIME_MS = SDL_GetTicks();
		//int ELAPSED_TIME_MS = CURRENT_TIME_MS - LAST_UPDATE_TIME;
	
		//this->update(minF(ELAPSED_TIME_MS, 5000 / drawingspeed));
		//LAST_UPDATE_TIME = CURRENT_TIME_MS;

	}


}

void Fractal::update(float elapsedTime)
{

}

Fractal::~Fractal()
{
	
}
