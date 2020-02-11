#include <iostream>
#include "Vector2d.h"

int main() {
	Vector2d v1 = Vector2d(1, 0);
	Vector2d v2 = Vector2d(0, 1);
	std::cout << "Vector 1: " << (std::string)v1 << std::endl;
	std::cout << "Vector 1: " << (std::string)v2 << std::endl;
	std::cout << "Sum: " << (std::string)(v1 + v2) << std::endl;
	std::cout << "Sub: " << (std::string)(v1 - v2) << std::endl;
	std::cout << "Mult by 2: " << (std::string)(v1 * 2) << std::endl;;
	std::cout << "Scalar mupliplication: " << v1 * v2 << std::endl;
	std::cout << "Length of vector 1: " << v1.len() << std::endl;
	std::cout << "Length of vector 2: " << v2.len() << std::endl;
	std::cout << "Angle: " << v1.angle(v2) << std::endl;
	return 0;
}
