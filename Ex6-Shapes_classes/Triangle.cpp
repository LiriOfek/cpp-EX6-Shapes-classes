/********************************************************\
File Name: Truangle.cpp
Author: Liri (21/4/2020)
Purpose: This file contain class of Triangle, that inheritor from Shape,
			with its functions and parameter
\********************************************************/

#include "Triangle.h"

Triangle::Triangle(double triangle_base,
	double truangle_height,
	double triangle_side_one,
	double triangle_side_two) {
	base = triangle_base;
	height = truangle_height;
	side_one = triangle_side_one;
	side_two = triangle_side_two;
}

double Triangle::getArea()
{
	return (base * height) / 2;
}

double Triangle::getPerimeter()
{
	return base + side_one + side_two;
}