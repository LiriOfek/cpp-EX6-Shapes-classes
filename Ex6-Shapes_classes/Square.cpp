/********************************************************\
File Name: Square.cpp
Author: Liri (21/4/2020)
Purpose: This file contain class of Square, that inheritor from Shape,
			with its functions and parameter
\********************************************************/

#include "Square.h"

Square::Square(double square_length)
{
	length = square_length;
}

double Square::getArea()
{
	return length * length;
}

double Square::getPerimeter()
{
	return FOUR * length;
}