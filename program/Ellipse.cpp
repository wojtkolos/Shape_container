#include "Ellipse.h"

//Constr/Destr
Ellipse::Ellipse(std::string name, double diagonalA, double diagonalB) 
	:diagonalA(diagonalA), diagonalB(diagonalB), Shape(name)
{
	std::cout << "I'm Ellipse constructor\n";
}
Ellipse::~Ellipse() {
	std::cout << "I'm Ellpse destructor\n";
}

//Functions
double Ellipse::area()
{
	return M_PI * diagonalA * diagonalB;
}

double Ellipse::perimeter()
{
	return M_PI * (3 / 2 * (diagonalA + diagonalB - sqrt(diagonalA *diagonalB)));
}

void Ellipse::display() {
	std::cout << "Ellipse name: " << getName() << " " << ", area: " << area() << std::endl;
}
