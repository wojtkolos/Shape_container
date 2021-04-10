#include "Rectangle.h"

//Constr/Destr
Rectangle::Rectangle(std::string name, double width, double height)
	: width(width), height(height), Shape(name)
{
	std::cout << "I'm Rectangle constructor\n";
}
Rectangle::~Rectangle()
{
	std::cout << "I'm Rectangle destructor\n";
}

//Functions
double Rectangle::area()
{
	return width * height;
}

double Rectangle::perimeter()
{
	return 2 *width + 2 * height;
}

void Rectangle::display()
{
	std::cout << "Rectangle name: " << getName() << " " << ", area: " << area() << std::endl;
}