/********************************************************\
File Name: Shape.h
Author: Liri (21/4/2020)
Purpose: This header file contain class of Shape, with its
			functions and parameter
\********************************************************/

#pragma once

#include <iostream>
#include <string>
using namespace std;

/*class Shape that contain function that set shape name and get shape name,
get area, and get perimeter of shape*/
class Shape {
	string name;
public:
	string getName()
	{
		/**
		* @brief  get name of shape
		* @param  OUT name of the shape
		* @return the name of the shape
		* @author  Liri
		*/
		return name;
	}
	void setName(string new_name)
	{
		/**
		* @brief  set the name of the shape
		* @param  IN string new_name - the new name of the shape
		* @return this function has no return value
		* @notes  this function change the name of the shape to new_name
		* @author  Liri
		*/
		name = new_name;
	}
	virtual double getArea() = 0;
	/*return the area of the shape*/
	virtual double getPerimeter() = 0;
	/*return the perimeter of the shape*/
};
