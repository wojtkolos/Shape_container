#include "Square.h"


//Constr/Destr
Square::Square(std::string name, double width)
	: Rectangle(name, width, width)
{
	std::cout << "I'm Square constructor\n";
}
Square::~Square()
{
	std::cout << "I'm Square destructor\n";
}

//Functions
double Square::area()
{
	return Rectangle::area();
}

double Square::perimeter() 
{
	return 4 * Rectangle::width;
}

void Square::display()
{
	std::cout << "Squre name: " << getName() << ", area: " << area() << std::endl;
}