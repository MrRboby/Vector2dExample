#pragma once
#include <cmath>
#include <string>
class Vector2d
{
private:
	double x, y;
public:
	Vector2d();
	Vector2d(double, double);
	Vector2d(double, double, double, double);
	Vector2d(const Vector2d&);
	~Vector2d();
	void setx(double);
	double getx() const;
	void sety(double);
	double gety() const;
	Vector2d operator+(const Vector2d&) const;
	Vector2d operator-(const Vector2d&) const;
	Vector2d operator*(double) const;
	friend const Vector2d operator*(double, const Vector2d&);
	double operator*(const Vector2d&) const;
	Vector2d& operator++();
	Vector2d operator++(int);
	Vector2d& operator--();
	Vector2d operator--(int);
	const Vector2d& operator+=(const Vector2d&);
	const Vector2d& operator-=(const Vector2d&);
	const Vector2d& operator*=(double);
	operator std::string();
	double len() const;
	double angle(const Vector2d& v) const;
};

