#include "stdafx.h"

#include "KeyOperational.h"
#include <iostream>

KeyOperational::KeyOperational()
{
}

KeyOperational::~KeyOperational()
{
}
//גûחûגאועסÿ ג םאקאכו ךאזהמדמ םמגמדמ ךאהמא
void KeyOperational::beginNewFrame()
{
	this->_pressedKeys.clear();
	this->_releasedKeys.clear();
}

void KeyOperational::keyDownEvent(const SDL_Event& event)
{
	this->_pressedKeys[event.key.keysym.scancode] = true;
	this->_heldKeys[event.key.keysym.scancode] = true;
}

void KeyOperational::keyUpEvent(const SDL_Event& event)
{
	this->_releasedKeys[event.key.keysym.scancode] = true;
	this->_heldKeys[event.key.keysym.scancode] = false;
}

bool KeyOperational::wasKeyPressed(SDL_Scancode key)
{
	return this->_pressedKeys[key];
}

bool KeyOperational::wasKeyReleased(SDL_Scancode key)
{
	return this->_releasedKeys[key];
}

bool KeyOperational::isKeyHeld(SDL_Scancode key)
{
	return this->_heldKeys[key];
}