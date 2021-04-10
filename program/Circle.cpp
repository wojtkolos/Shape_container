#include "Circle.h"

//Constr/Destr
Circle::Circle(std::string name, double radius)
	:radius(radius), Shape(name)
{
	std::cout << "I'm Circle constructor\n";
}

Circle::~Circle()
{
	std::cout << "I'm Circle destructor\n";
}

//Functions
double Circle::area()
{
	return 2 * M_PI * radius;
}

double Circle::perimeter()
{
	return M_PI * pow(radius, 2);
}

void Circle::display()
{
	std::cout << "Circle name: " << getName() << " " << ", area: " << area() << std::endl;
}