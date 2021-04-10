#pragma once
#include "Shape.h"

class Rectangle
	:public Shape
{
protected:
	//Var
	double width;
	double height;
public:
	//Contsr/Destr
	Rectangle(std::string, double, double);
	~Rectangle();

	//Functions
	virtual double area();
	virtual double perimeter();
	virtual void display();
};