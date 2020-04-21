/********************************************************\
File Name: main.cpp
Author: Liri (21/4/2020)
Purpose: This file create circle, square, rectangle and triangle,
		 according to the parameters from the user, and print the
		 name, area and perimeter of each
\********************************************************/

#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "constants_for_print.h"


void create_user_circle()
{
	/**
	* @brief  get name of circle and radius from user, create circle and print
	*		  the circle name, area and perimeter
	* @param  this function has no parameters
	* @return this function has no return value
	* @note   create circle from class Circle : public Shape, and fill its
	*		  parameters from user
	* @author  Liri
	*/
	string circle_name;
	double circle_radius;

	cout << ENTER_CIRCLE_NAME;
	getline(cin >> ws, circle_name);
	cout << ENTER_CIRCLE_RADIUS;
	cin >> circle_radius;

	Circle circle(circle_radius);
	circle.setName(circle_name);

	cout << CIRCLE_NAME << circle.getName() << endl;
	cout << CIRCLE_AREA << circle.getArea() << endl;
	cout << CIRCLE_PERIMETER << circle.getPerimeter() << endl << endl;
}

void create_user_square()
{
	/**
	* @brief  get name of square and length from user, create square and print
	*		  the square name, area and perimeter
	* @param  this function has no parameters
	* @return this function has no return value
	* @note   create square from class Square : public Shape, and fill its
	*		  parameters from user
	* @author  Liri
	*/
	string square_name;
	double square_length;

	cout << ENTER_SQUARE_NAME;
	getline(cin >> ws, square_name);
	cout << ENTER_SQUARE_LENGTH;
	cin >> square_length;

	Square square(square_length);
	square.setName(square_name);

	cout << SQUARE_NAME << square.getName() << endl;
	cout << SQUARE_AREA << square.getArea() << endl;
	cout << SQUARE_PERIMETER << square.getPerimeter() << endl << endl;
}

void create_user_rectangle()
{
	/**
	* @brief  get name of rectangle, length and width from user, create square
	*		  and print the rectangle name, area and perimeter
	* @param  this function has no parameters
	* @return this function has no return value
	* @note   create rectangle from class Rectangle : public Shape, and fill its
	*		  parameters from user
	* @author  Liri
	*/
	string rectangle_name;
	double rectangle_length;
	double rectangle_width;

	cout << ENTER_RECTANGLE_NAME;
	getline(cin >> ws, rectangle_name);
	cout << ENTER_RECTANGLE_LENGTH;
	cin >> rectangle_length;
	cout << ENTER_RECTANGLE_WIDTH;
	cin >> rectangle_width;

	Rectangle rectangle(rectangle_length, rectangle_width);
	rectangle.setName(rectangle_name);

	cout << RECTANGLE_NAME << rectangle.getName() << endl;
	cout << RECTANGLE_AREA << rectangle.getArea() << endl;
	cout << RECTANGLE_PERIMETER << rectangle.getPerimeter() << endl << endl;
}

void create_user_triangle()
{
	/**
	* @brief  get name of triangle, base, height, side one and side two from user,
	*		  create square and print the triangle name, area and perimeter
	* @param  this function has no parameters
	* @return this function has no return value
	* @note   create rectangle from class triangle : public Shape, and fill its
	*		  parameters from user
	* @author  Liri
	*/
	string triangle_name;
	double triangle_base;
	double triangle_height;
	double triangle_side_one;
	double triangle_side_two;

	cout << ENTER_TRIANGLE_NAME;
	getline(cin >> ws, triangle_name);
	cout << ENTER_TRIANGLE_BASE;
	cin >> triangle_base;
	cout << ENTER_TRIANGLE_HEIGHT;
	cin >> triangle_height;
	cout << ENTER_TRIANGLE_SIDE_ONE;
	cin >> triangle_side_one;
	cout << ENTER_TRIANGLE_SIDE_TWO;
	cin >> triangle_side_two;

	Triangle triangle(triangle_base, triangle_height, triangle_side_one, triangle_side_two);
	triangle.setName(triangle_name);
	cout << TRIANGLE_NAME << triangle.getName() << endl;
	cout << TRIANGLE_AREA << triangle.getArea() << endl;
	cout << TRIANGLE_PERIMETER << triangle.getPerimeter() << endl;
}

int main() {
	/**
	* @brief  create circle, square, rectangle and triangle with user parameters
	*		  and print the shapes name, area and perimeter
	* @param  OUT 0 for success
	* @return 0 for success
	* @note   create circle, square, rectangle and triangle and fill its
	*		  parameters from user
	* @author  Liri
	*/
	create_user_circle();
	create_user_square();
	create_user_rectangle();
	create_user_triangle();

	return 0;
}
