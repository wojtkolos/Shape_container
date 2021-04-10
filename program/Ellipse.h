#pragma once
#include "Circle.h"

class Ellipse 
	:public Shape
{
	//Var
	double diagonalA;
	double diagonalB;
public:
	//Constr/Destr
	Ellipse(std::string name, double diagonalA, double diagonalB);
	~Ellipse();

	//Functions
	virtual double area();
	virtual double perimeter();
	virtual void display();
};