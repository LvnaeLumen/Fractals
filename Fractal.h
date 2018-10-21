#pragma once

class Fractal
{
private: 
	int drawingspeed;
	


public:
	
	Fractal();
	Fractal(int drawingSpeed);
	void DrawRandomFractal();
	void update(float elapsedTime);
	void DrawFractal();
	float minF(int elTime, int mxTime);

	~Fractal();

};

