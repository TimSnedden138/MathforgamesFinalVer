#include <cmath>
#include "vec2.h"
vec2::vec2()
{
	x = 0;
	y = 0;
}

vec2::vec2(float x, float y)
{
	this->x = x;
	this->y = y;
}
float vec2::magnitude() const
{
	return sqrt(x*x + y * y);
}

float vec2::dot(const vec2 & rhs) const
{
	return x * rhs.x + y * rhs.y;
}

//vec2 & vec2::normalize()
//{
//	// TODO: insert return statement here
//}
//
//vec2 vec2::getNormalized() const
//{
//	return vec2();
//}
//
//vec2 & vec2::scale(const vec2 & rhs)
//{
//	// TODO: insert return statement here
//}
//
//vec2 vec2::getScaled(const vec2 & rhs) const
//{
//	return vec2();
//}
//
vec2 vec2::getPerpCW() const
{
	return vec2(x,-y);
}

vec2 vec2::getPerpCCW() const
{
	return vec2(-x,y);
}

//float vec2::angleBetween(const vec2 & rhs) const
//{
//	return 0.0f;
//}
//
vec2 vec2::operator+(const vec2 & rhs) const
{
	return vec2(x + rhs.x, y + rhs.y);
}

vec2 vec2::operator-(const vec2 & rhs) const
{
	return vec2(x-rhs.x,y-rhs.y);
}

vec2 vec2::operator*(const float rhs) const
{
	return vec2(x*rhs,y*rhs);
}

vec2 vec2::operator/(const float rhs) const
{
	return vec2(x/rhs,y/rhs);
}

vec2 & vec2::operator+=(const vec2 & rhs)
{
	vec2 red;
	red.x = x + rhs.x;
	red.y = y + rhs.x;
	return red;
}

vec2 & vec2::operator-=(const vec2 & rhs)
{
	vec2 red;
	red.x = x - rhs.x;
	red.y = y - rhs.x;
	return red;
}

//vec2 & vec2::operator*=(const float rhs)
//{
//	// TODO: insert return statement here
//}
//
//vec2 & vec2::operator/=(const float rhs)
//{
//	// TODO: insert return statement here
//}
//
//bool vec2::operator==(const vec2 & rhs) const
//{
//	return false;
//}
//
//bool vec2::operator!=(const vec2 & rhs) const
//{
//	return false;
//}
//
//vec2 vec2::operator-() const
//{
//	return vec2();
//}
//
//vec2::operator float*()
//{
//}
//
//vec2::operator const float*() const
//{
//}
//
//vec2 operator*(const float lhs, const vec2 & rhs)
//{
//	return vec2();
//}
