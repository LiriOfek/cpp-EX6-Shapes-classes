/********************************************************\
File Name: Tringle.h
Author: Liri (21/4/2020)
Purpose: This header file contain class of Triangle, that inheritor from Shape,
			with its functions and parameters
\********************************************************/

#pragma once
#include "Shape.h"

/*class Triangle, that inheritor from Shape, and contain functions that
get area and get perimeter of the triangle*/
class Triangle : public Shape {
public:
	Triangle(double triangle_base,
		double truangle_height,
		double triangle_side_one,
		double triangle_side_two);
	/**
	* @brief  create Triangle and set its base, height, side ons and side two
	* @param  IN double triangle_base - the triangle base
	*		  IN double truangle_height - the triangle height
	*		  IN double triangle_side_one - the triangle side one
	*		  IN double triangle_side_two - the triangle side two
	* @return this function has no return value
	* @note   create triangle and set its base, height, side one and side two
	* @author  Liri
	*/
	double getArea() override;
	/**
	* @brief  calculate area of triangle
	* @param  OUT double area of the triangle
	* @return the area of the triangle
	* @author  Liri
	*/
	double getPerimeter() override;
	/**
	* @brief  calculate perimeter of trianglr
	* @param  OUT double perimeter of the triangle
	* @return the perimeter of the triangle
	* @author  Liri
	*/
private:
	double base;
	double height;
	double side_one;
	double side_two;
};