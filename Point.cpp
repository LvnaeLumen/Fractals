#include "stdafx.h"
#include "Point.h"
#include <iostream>


Point::Point()
{
	x = 100+  rand()% 700 ; y = 100 + rand() % 500;
	prevPoint = NULL;
	nextPoint = NULL;
}


Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
	prevPoint = NULL;
	nextPoint = NULL;
}


Point::~Point()
{
}
