#pragma once
#include "Circle.h"

class Ellipse 
	:public Shape
{
	float diagonalA_, diagonalB_;

public:
	Ellipse(float diagonalA, float diagonalB) diagonalA_(diagonalA), diagonalB_(diagonalB) {
		std::cout << "Tworze obiekt Ellipse";
	}
	Ellipse() {
		std::cout << "Konstruktor domyœlny Ellipse";
	}
	~Ellipse() {
		std::cout << "Usuwam obiekt Ellipse";
	}
};
