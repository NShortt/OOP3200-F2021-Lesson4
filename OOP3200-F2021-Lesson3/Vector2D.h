#pragma once
#ifndef __VECTOR_2D__
#define __VECTOR_2D__

#include <string>

class Vector2D
{
public:
	// CONSTRUCTOR(S)
	Vector2D();
	Vector2D(float value);
	Vector2D(float x, float y);

	// COPY CONSTRUCTOR
	Vector2D(const Vector2D& vec2D);

	// DESTRUCTOR
	~Vector2D();

	// OPERATOR OVERRIDES
	Vector2D operator=(const Vector2D& rhs_vector);
	Vector2D operator+(const Vector2D& rhs_vector) const;
	Vector2D operator-(const Vector2D& rhs_vector) const;

	Vector2D operator*(const Vector2D& rhs_vector) const;
	Vector2D operator*(const float rhs_scalar) const;

	// FRIEND OVERLOADS
	friend Vector2D operator*(const float lhs_scalar, const Vector2D& rhs_vector);

	friend std::ostream& operator<<(std::ostream& out, const Vector2D& rhs_vector);
	friend std::istream& operator>>(std::istream& in, Vector2D& rhs_vector);

	// ACCESSORS
	float GetX() const;
	float GetY() const;

	// MUTATORS
	void SetX(float x);
	void SetY(float y);
	void Set(float x, float y);

	// PUBLIC METHODS
	std::string ToString() const;

	// PUBLIC STATIC METHODS (Public Class Functions that are Static)
	static float Distance(const Vector2D& lhs, const Vector2D& rhs);

private:
	// ATTRIBUTES
	float m_x{};
	float m_y{};

	// PRIVATE METHODS
};

#endif /* (__VECTOR_2D__) */

