#include "Vector2d.h"
#include <iostream>
#include <cmath>
Vector2d::Vector2d() {
	this->x = 0;
	this->y = 0;
}
Vector2d::Vector2d(double x, double y) {
	this->x = x;
	this->y = y;
}
Vector2d::Vector2d(double x1, double y1, double x2, double y2) {
	this->x = x2 - x1;
	this->y = y2 - y1;
}
Vector2d::Vector2d(const Vector2d& v) {
	this->x = v.x;
	this->y = v.y;
}
Vector2d::~Vector2d() {};
void Vector2d::setx(double x) {
	this->x = x;
}
double Vector2d::getx() {
	return this->x;
}
void Vector2d::sety(double y) {
	this->y = y;
}
double Vector2d::gety() {
	return this->y;
}
void Vector2d::print() {
	std::cout << "(" << x << "; " << y << ")";
}
Vector2d* Vector2d::sum(Vector2d v) {
	return new Vector2d(this->x + v.x, this->y + v.y);
}
Vector2d* Vector2d::sub(Vector2d v) {
	return new Vector2d(this->x - v.x, this->y - v.y);
}
Vector2d* Vector2d::mult(double k) {
	return new Vector2d(this->x * k, this->y * k);
}
double Vector2d::scalarMult(Vector2d v) {
	return this->x * v.x + this->y * v.y;
}
double Vector2d::len() {
	return sqrt(this->x * this->x + this->y * this->y);
}
double Vector2d::angle(Vector2d v) {
	return acos(scalarMult(v) / (this->len() * v.len()));
}