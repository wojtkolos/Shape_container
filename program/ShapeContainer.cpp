#include "ShapeContainer.h"


//Constr/Destr
ShapeContainer::ShapeContainer()
{
	
}

ShapeContainer::~ShapeContainer()
{
	for (auto& shape : this->shapes)
		delete shape;
}

//Functions
void ShapeContainer::add(Shape* toAdd)
{
	this->shapes.push_back(toAdd);
}

void ShapeContainer::displayAll() const
{
	for (auto& shape : this->shapes)
		shape->display();
}

double ShapeContainer::totalArea() const
{
	double areaSum = 0;
	for (auto& shape : this->shapes)
		areaSum += shape->area();
	return areaSum;
}
std::vector<Shape*> ShapeContainer::getGreaterThan(double area)
{
	std::vector<Shape*> temp;
	for (auto& shape : this->shapes) {
		if (shape->area() > area) {
			temp.push_back(shape);
		}
	}
	return temp;
}