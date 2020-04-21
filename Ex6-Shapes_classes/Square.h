/********************************************************\
File Name: Square.h
Author: Liri (21/4/2020)
Purpose: This header file contain class of Square, that inheritor from Shape,
			with its functions and parameters
\********************************************************/

#pragma once
#include "Shape.h"

/*class Square, that inheritor from Shape, and contain functions that
get area and get perimeter of the square*/
class Square : public Shape {
public:
	Square(double square_length);
	/**
	* @brief  create Square and set its length
	* @param  IN double square_length - the square length
	* @return this function has no return value
	* @note   create square and set its length
	* @author  Liri
	*/
	double getArea() override;
	/**
	* @brief  calculate area of square
	* @param  OUT double area of the square
	* @return the area of the square
	* @author  Liri
	*/
	double getPerimeter() override;
	/**
	* @brief  calculate perimeter of square
	* @param  OUT double perimeter of the square
	* @return the perimeter of the square
	* @author  Liri
	*/

private:
	double length;
};