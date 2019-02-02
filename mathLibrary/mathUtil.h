#pragma once
namespace math_help
{
	int sum(int a, int b);
	int min(int a, int b);
	//Returns the smaller of the two values
	int max(int a, int b);
	//Returns the larger of the two values
	int clamp(int value, int min, int max);
	//Returns a value no smaller than min and no larger than max.
	const double PI = 3.14159265359;
	//Defined as PI or π.
	const double DEG_TO_RAD(float rad);
	//Multiply this with an angle measure expressed in degrees to get its equivalent in radians.
	const double RAD_TO_DEG(float deg);
	//Multiply this with an angle measure expressed in radians to get its equivalent in degrees.
	int abs(int val);
	//Returns the absolute value of val.
	int pow(int base, int power);
	//Returns base to the power of exp(i.e.basepower).
	bool isPowerOfTwo(int val);
	//Returns true if the value is a power of two, otherwise returns false.
	int nextPowerOfTwo(int val);
	//Returns the next power of two after the given value.
	//The behavior of this function if the next power of two is beyond the range of int is not defined.
	float moveTowards(float current, float target, float maxDelta);
	//Moves the current value towards the target value.The maximum change should not exceed maxDelta.
	//The value returned should never move past the target value.
}