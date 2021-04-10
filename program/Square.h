#pragma once
#include "Rectangle.h"

class Square
	:public Rectangle
{
public:
	//Constr/Destr
	Square(std::string name, double width);
	~Square();

	//Functions
	virtual double area();
	virtual double perimeter();
	virtual void display();
};