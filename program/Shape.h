#pragma once
#include <string>
#include <iostream>
#include <vector>
#include<math.h>

# define M_PI         3.141592653589793238462643383279502884L /* pi */


class Shape 
{
	std::string name;
public:
	//Constr//Destr
	Shape(std::string name) 
		: name(name) 
	{
		std::cout << "I'm Shape constructor\n";
	}
	~Shape() 
	{
		std::cout << "I'm Shape destructor\n";
	}

	virtual void setName(std::string name) { this->name = name; }
	virtual std::string getName() { return name; }
	virtual double area() = 0;
	virtual double perimeter() = 0;
	virtual void display() = 0;
};