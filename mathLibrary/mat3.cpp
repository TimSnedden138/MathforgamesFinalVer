#include "mat3.h"

mat3::mat3()
{
}

mat3::mat3(float * ptr)
{
}

mat3::mat3(float m1, float m2, float m3, float m4, float m5, float m6, float m7, float m8, float m9)
{
}

mat3 mat3::identity()
{
	return mat3();
}

mat3 mat3::translation(float x, float y)
{
	return mat3();
}

mat3 mat3::translation(const vec2 & vec)
{
	return mat3();
}

mat3 mat3::rotation(float rot)
{
	return mat3();
}

mat3 mat3::scale(float xScale, float yScale)
{
	return mat3();
}

mat3 mat3::scale(const vec2 & vec)
{
	return mat3();
}

void mat3::set(float m1, float m2, float m3, float m4, float m5, float m6, float m7, float m8, float m9)
{
}

void mat3::set(float * ptr)
{
}

void mat3::transpose()
{
}

mat3 mat3::getTranspose() const
{
	return mat3();
}

mat3::operator float*()
{
}

mat3::operator const float*() const
{
}

vec3 & mat3::operator[](const int index)
{
	return axis[index];
}

const vec3 & mat3::operator[](const int index) const
{
	return axis[index];
}

mat3 mat3::operator*(const mat3 & rhs) const
{
	return mat3();
}

mat3 & mat3::operator*=(const mat3 & rhs)
{
	// TODO: insert return statement here
}

vec3 mat3::operator*(const vec3 & rhs) const
{
	return vec3();
}

vec2 mat3::operator*(const vec2 & rhs) const
{
	return vec2();
}

bool mat3::operator==(const mat3 & rhs) const
{
	return false;
}

bool mat3::operator!=(const mat3 & rhs) const
{
	return false;
}
