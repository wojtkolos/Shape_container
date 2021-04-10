#pragma once
#include "Square.h"

class Circle 
	: public Shape
{
	//Var
	double radius;
public:
	//Constr/Destr
	Circle(std::string name, double radius);
	~Circle();

	//Functions
	virtual double area();
	virtual double perimeter();
	virtual void display();
};