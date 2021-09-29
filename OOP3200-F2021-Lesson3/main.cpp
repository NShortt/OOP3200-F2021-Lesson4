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
#include <vector>

#include "Vector2D.h"
#include "Transform.h"


int main()
{
	// create an empty vector of Transform shape
	std::vector<Transform> objects;

	// initialize 5 objects of type Transform
	// then store them inside the empty object vector
	for (int i = 0; i < 5; ++i)
	{
		Transform tempObject;
		objects.push_back(tempObject);
	}

	int counter = 1;

	// for each object in objects
	for (Transform& object : objects)
	{
		std::cout << "-----------------------------" << std::endl;
		std::cout << "Object# " << counter << std::endl;
		object.position.Set(counter * 10.f, 0.0);
		std::cout << object.ToString() << std::endl;
		std::cout << "-----------------------------\n" << std::endl;
		counter++;
	}

	float speed = 10.0f;
	std::cout << "Object# 1" << std::endl;
	objects[0].position = objects[0].position + Vector2D::Left() * speed;

	std::cout << objects[0].position << std::endl;
}

