#pragma once
#include "Ellipse.h"



class ShapeContainer
{
	std::vector<Shape*> shapes;
public:
	//Constr/Destr
	ShapeContainer();
	~ShapeContainer();

	//Functions
	void add(Shape*);
	void displayAll() const;
	double totalArea() const;
	std::vector<Shape*> getGreaterThan(double);

};




