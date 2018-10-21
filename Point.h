#pragma once
class Point
{
public:
	int x, y;
	Point* prevPoint;
	Point* nextPoint;
	Point();
	Point(int x, int y);
	~Point();
};

