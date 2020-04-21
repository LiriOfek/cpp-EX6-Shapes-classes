/********************************************************\
File Name: Circle.cpp
Author: Liri (21/4/2020)
Purpose: This file contain class of Circle, that inheritor from Shape,
			with its functions and parameter
\********************************************************/

#include "Circle.h"

Circle::Circle(double circle_radius)
{
	radius = circle_radius;
}

double Circle::getArea()
{
	return radius * radius * M_PI;
}

double Circle::getPerimeter() {
	return 2 * M_PI * radius;
}