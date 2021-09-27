#include "Vector2D.h"

#include <sstream>
#include <cmath>

Vector2D::Vector2D()
{
	Set(0.0f, 0.0f);
}

Vector2D::Vector2D(const float value)
{
	Set(value, value);
}

Vector2D::Vector2D(const float x, const float y)
{
	Set(x, y);
}

Vector2D::Vector2D(const Vector2D& vec2D)
{
	Set(vec2D.GetX(), vec2D.GetY());
}

Vector2D::~Vector2D()
= default;

Vector2D Vector2D::operator=(const Vector2D& rhs_vector)
{
	Set(rhs_vector.GetX(), rhs_vector.GetY());
	return *this;
}

Vector2D Vector2D::operator+(const Vector2D& rhs_vector) const
{
	Vector2D temp_vector;
	temp_vector.SetX((*this).GetX() + rhs_vector.GetX());
	temp_vector.SetY((*this).GetY() + rhs_vector.GetY());
	return temp_vector;
}

Vector2D Vector2D::operator-(const Vector2D& rhs_vector) const
{
	Vector2D temp_vector;
	temp_vector.SetX((*this).GetX() - rhs_vector.GetX());
	temp_vector.SetY((*this).GetY() - rhs_vector.GetY());
	return temp_vector;
}

Vector2D Vector2D::operator*(const Vector2D& rhs_vector) const
{
	Vector2D temp_vector;
	temp_vector.SetX((*this).GetX() * rhs_vector.GetX());
	temp_vector.SetY((*this).GetY() * rhs_vector.GetY());
	return temp_vector;
}

Vector2D Vector2D::operator*(const float rhs_scalar) const
{
	Vector2D temp_vector;
	temp_vector.SetX((*this).GetX() * rhs_scalar);
	temp_vector.SetY((*this).GetY() * rhs_scalar);
	return temp_vector;
}

Vector2D operator*(const float lhsScalar, const Vector2D& rhsVector)
{
	Vector2D temp_vector;
	temp_vector.SetX(lhsScalar * rhsVector.GetX());
	temp_vector.SetY(lhsScalar * rhsVector.GetY());
	return temp_vector;
}

std::ostream& operator<<(std::ostream& out, const Vector2D& rhs_vector)
{
	out << rhs_vector.ToString();
	return out;
}

std::istream& operator>>(std::istream& in, Vector2D& rhs_vector)
{
	in >> rhs_vector.m_x;
	in.ignore();
	in >> rhs_vector.m_y;
	return in;
}

float Vector2D::GetX() const
{
	return m_x;
}

float Vector2D::GetY() const
{
	return m_y;
}

void Vector2D::SetX(const float x = 0.0f)
{
	m_x = x;
}

void Vector2D::SetY(const float y = 0.0f)
{
	m_y = y;
}

void Vector2D::Set(const float x = 0.0f, const float y = 0.0f)
{
	SetX(x);
	SetY(y);
}

std::string Vector2D::ToString() const
{
	std::string outputString;
	outputString += "(" + std::to_string(GetX()) + ", " + std::to_string(GetY()) + ")";
	return outputString;
}

float Vector2D::Distance(const Vector2D& lhs, const Vector2D& rhs)
{
	// difference between x values
	const float delta_x = rhs.GetX() - lhs.GetX();
	// difference between y values
	const float delta_y = rhs.GetY() - lhs.GetY();

	// return the result of the pythagorean formula
	return sqrt((delta_x * delta_x) + (delta_y * delta_y));
}


