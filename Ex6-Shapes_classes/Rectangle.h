/********************************************************\
File Name: Rectangle.h
Author: Liri (21/4/2020)
Purpose: This header file contain class of Rectangle, that inheritor from Shape,
			with its functions and parameters
\********************************************************/

#pragma once
#include "Shape.h"

/*class Rectangle, that inheritor from Shape, and contain functions that
get area and get perimeter of the rectangle*/
class Rectangle : public Shape {
public:
	Rectangle(double rectangle_length, double rectangle_width);
	/**
	* @brief  create Rectangle and set its length and width
	* @param  IN double rectangle_length - the rectangle length
	*		  IN double rectangle_width - the rectangle width
	* @return this function has no return value
	* @note   create rectanglr and set its length and width
	* @author  Liri
	*/
	double getArea() override;
	/**
	* @brief  calculate area of rectangle
	* @param  OUT double area of the rectangle
	* @return the area of the rectangle
	* @author  Liri
	*/
	double getPerimeter() override;
	/**
	* @brief  calculate perimeter of rectangle
	* @param  OUT double perimeter of the rectangle
	* @return the perimeter of the rectangle
	* @author  Liri
	*/
private:
	double length;
	double width;
};
