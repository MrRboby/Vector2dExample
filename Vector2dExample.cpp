#include <iostream>
#include "Vector2d.h"

int main() {
	Vector2d* v1 = new Vector2d(1, 0);
	Vector2d* v2 = new Vector2d(0, 1);
	std::cout << "Vector 1: ";
	v1->print();
	std::cout << std::endl;
	std::cout << "Vector 2: ";
	v2->print();
	std::cout << std::endl;
	std::cout << "Sum: ";
	v1->sum(*v2);
	v1->print();
	std::cout << std::endl;
	std::cout << "Sub: ";
	v1->sub(*v2);
	v1->print();
	std::cout << std::endl;
	std::cout << "Mult by 2: ";
	v1->mult(2);
	v1->print();
	std::cout << std::endl;
	std::cout << "Scalar mupliplication: " << v1->scalarMult(*v2) << std::endl;
	std::cout << "Length of vector 1: " << v1->len() << std::endl;
	std::cout << "Length of vector 2: " << v2->len() << std::endl;
	std::cout << "Angle: " << v1->angle(*v2) << std::endl;
	return 0;
}
