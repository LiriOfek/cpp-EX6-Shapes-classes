/********************************************************\
File Name: Circle.h
Author: Liri (21/4/2020)
Purpose: This header file contain class of Circle, that inheritor from Shape,
			with its functions and parameters
\********************************************************/

#pragma once

#define _USE_MATH_DEFINES
#include <cmath>
#include "Shape.h"

/*class Circle, that inheritor from Shape, and contain functions that
get area and get perimeter of the circle*/
class Circle : public Shape {
public:
	Circle(double circle_radius);
	/**
	* @brief  create Circle and set its radius
	* @param  IN double circle_radius - the circle radius
	* @return this function has no return value
	* @note   create circle and set its radius
	* @author  Liri
	*/
	double getArea() override;
	/**
	* @brief  calculate area of circle
	* @param  OUT double area of the circle
	* @return the area of the circle
	* @author  Liri
	*/
	double getPerimeter() override;
	/**
	* @brief  calculate perimeter of circle
	* @param  OUT double perimeter of the circle
	* @return the perimeter of the circle
	* @author  Liri
	*/

private:
	double radius;
};