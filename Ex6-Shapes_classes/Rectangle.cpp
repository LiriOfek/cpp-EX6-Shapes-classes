/********************************************************\
File Name: Rectangle.cpp
Author: Liri (21/4/2020)
Purpose: This file contain class of Rectangle, that inheritor from Shape,
			with its functions and parameter
\********************************************************/

#include "Rectangle.h"

Rectangle::Rectangle(double rectangle_length, double rectangle_width)
{
	length = rectangle_length;
	width = rectangle_width;
}

double Rectangle::getArea()
{
	return width * length;
}

double Rectangle::getPerimeter()
{
	return 2 * width + 2 * length;
}