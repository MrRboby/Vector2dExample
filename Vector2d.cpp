#include "Vector2d.h"
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
double Vector2d::getx() const {
	return this->x;
}
void Vector2d::sety(double y) {
	this->y = y;
}
double Vector2d::gety() const {
	return this->y;
}
Vector2d Vector2d::operator+(const Vector2d& v) const
{
	return Vector2d(this->x + v.x, this->y + v.y);
}
Vector2d Vector2d::operator-(const Vector2d& v) const {
	return Vector2d(this->x - v.x, this->y - v.y);
}
double Vector2d::operator*(const Vector2d& v) const {
	return this->x * v.x + this->y * v.y;
}
Vector2d Vector2d::operator*(double k) const {
	return Vector2d(this->x * k, this->y * k);
}
const Vector2d operator*(double k, const Vector2d& v)  {
	return Vector2d(v.x * k, v.y * k);
}
Vector2d& Vector2d::operator++() {
	this->x++;
	this->y++;
	return *this;
}
Vector2d Vector2d::operator++(int) {
	Vector2d temp = Vector2d(x, y);
	this->x++;
	this->y++;
	return temp;
}
Vector2d& Vector2d::operator--() {
	this->x--;
	this->y--;
	return *this;
}
Vector2d Vector2d::operator--(int) {
	Vector2d temp = Vector2d(x, y);
	this->x--;
	this->y--;
	return temp;
}
const Vector2d& Vector2d::operator+= (const Vector2d& v) {
	this->x += v.x;
	this->y += v.y;
	return *this;
}
const Vector2d& Vector2d::operator-=(const Vector2d& v) {
	this->x -= v.x;
	this->y -= v.y;
	return *this;
}
const Vector2d& Vector2d::operator*=(double k) {
	this->x *= k;
	this->y *= k;
	return *this;
}

Vector2d::operator std::string(){
	std::string s = "(" + std::to_string(this->x) + "; " + std::to_string(this->y) + ")";
	return s;
}

double Vector2d::len() const {
	return sqrt(this->x * this->x + this->y * this->y);
}
double Vector2d::angle(const Vector2d& v) const {
	return acos((*this) * v / (this->len() * v.len()));
}