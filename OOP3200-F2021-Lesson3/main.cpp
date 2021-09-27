/*
 * Author: Nicholas Shortt
 * StudentID: 100630003
 *
 * Date: September 20, 2021
 *
 * Desc: Demo project for OOP3200 - F2021- Week 3
 *
 */

#include <iostream>

#include "Vector2D.h"


int main()
{
	try
	{
		float scalar = 1.5f;

		// Getting input from the console int our vector 2 object
		std::cout << "Please enter the Origin Vector 2:" << std::endl;
		Vector2D origin;
		std::cin >> origin;

		std::cout << "Please enter the First Vector 2:" << std::endl;
		Vector2D first;
		std::cin >> first;

		const float distance = Vector2D::Distance(origin, first);

		// Output to the console from our vector 2 object
		std::cout << "\nThe distance between: " << origin << " and " << first << " is " << distance << std::endl;
	}
	catch (std::exception& exception)
	{
		std::cerr << exception.what() << " Ending Program" << std::endl;
	}
}

