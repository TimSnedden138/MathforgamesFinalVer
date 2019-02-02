#include "vec4.h"
#include<cmath>
vec4::vec4()
{
	x = 0;// setting x to zero
	y = 0;// setting y to zero
	z = 0;// setting z to zero
	w = 0;// setting w to zero
}

vec4::vec4(float x, float y, float z, float w)
{
	this->x = x;// setting this x to x
	this->y = y;// setting this y to y
	this->z = z;// setting this z to z
	this->w = z;// setting this w to w
}

float vec4::magnitude() const
{
	return sqrt(x*x + y * y + z * z + w * w);
}

float vec4::dot(const vec4 & rhs) const
{
	return x * rhs.x + y * rhs.y + z * rhs.z + w * rhs.w;

}

vec4 vec4::cross(const vec4 & rhs) const
{
	return { y * rhs.z - z * rhs.y, z * rhs.x - x * rhs.z, x * rhs.y - y * rhs.x,0};
}

vec4 & vec4::normalize()
{
	// TODO: insert return statement here
}

vec4 vec4::getNormalised() const
{
	return vec4();
}

vec4 & vec4::scale(const vec4 & rhs)
{
	// TODO: insert return statement here
}

vec4 vec4::getScaled(const vec4 & rhs) const
{
	return vec4();
}

vec4 vec4::operator+(const vec4 & rhs) const
{
	return vec4(x + rhs.x, y + rhs.y, z + rhs.z ,w + rhs.w);

}

vec4 vec4::operator-(const vec4 & rhs) const
{
	return vec4(x - rhs.x, y - rhs.y, z - rhs.z ,w - rhs.w);
}

vec4 vec4::operator*(const float rhs) const
{
	return vec4(x * rhs, y * rhs, z * rhs,w*rhs);
}

vec4 vec4::operator/(const float rhs) const
{
	return vec4(x / rhs, y / rhs, z / rhs,w/rhs);
}

vec4 & vec4::operator+=(const vec4 & rhs)
{
	vec4 one;
	one.x = x + rhs.x;
	one.y = y + rhs.y;
	one.z = z + rhs.z;
	one.w = w + rhs.w;
	return one;
}

vec4 & vec4::operator-=(const vec4 & rhs)
{
	vec4 one;
	one.y = y - rhs.y;
	one.z = z - rhs.z;
	one.w = w - rhs.w;
	one.x = x - rhs.x;
	return one;
}

vec4 & vec4::operator*=(const float rhs)
{
	vec4 one;
	one.x = x * x;
	one.y = y * y;
	one.z = z * z;
	one.w = w * w;
	return one;
}

vec4 & vec4::operator/=(const float rhs)
{
	vec4 one;
	one.x = x / x;
	one.y = y / y;
	one.z = z / z;
	one.w = w / w;
	return one;
}

vec4 operator*(const float lhs, const vec4 & rhs)
{
	return vec4();
}

bool vec4::operator==(const vec4 & rhs) const
{
	// checking to see if the four values are equal
	if (x && y && z && w == rhs.x && rhs.y && rhs.z && rhs.w) {
		return true;
	}
	return false;
}

bool vec4::operator!=(const vec4 & rhs) const
{
	// checking to see if the three values are not equal
	if (x && y && z && w != rhs.x && rhs.y&&rhs.z && rhs.w) {
		return true;
	}
	return false;
}

vec4 vec4::operator-() const
{
	return vec4();
}

vec4::operator float*()
{
}

vec4::operator const float*() const
{
}
