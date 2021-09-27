#pragma once

#ifndef __TRANSFORM__
#define __TRANSFROM__

#include "Vector2D.h"
#include <string>

struct Transform
{
	Vector2D position;
	Vector2D rotation;
	Vector2D scale;

	std::string ToString() const;

};

#endif /* defined (__TRANSFORM__) */
