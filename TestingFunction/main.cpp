#include"mathUtil.h"
#include <iostream>
int main()
{
	std::cout<<"Min: "<<math_help::min(4, 5)<<std::endl;
	std::cout << "Max: " << math_help::max(5, 4) << std::endl;
	std::cout << "Absolute ahead of 0: " << math_help::abs(42) << std::endl;
	std::cout << "Absolute behind 0: " << math_help::abs(-42) << std::endl;
	std::cout << "Base 4 Power 6: " << math_help::pow(4,6) << std::endl;
	std::cout << "Base 4 Power 1: " << math_help::pow(4, 1) << std::endl;
	std::cout <<math_help::isPowerOfTwo(4) << std::endl;




	return 0;
}