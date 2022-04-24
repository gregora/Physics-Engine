#include "../include/vector.h"
#include "math.h"
#include "stdio.h"

namespace pe {

	Vector::Vector(float x, float y){
		this -> x = x;
		this -> y = y;
	}

	void Vector::set(float x, float y){
		this -> x = x;
		this -> y = y;
	}

	float Vector::length() const{
		return sqrt(x*x + y*y);
	}

	Vector Vector::operator* (const float& n) const {
		return Vector(x*n, y*n);
	}
	Vector Vector::operator/ (const float& n) const {
		return Vector(x/n, y/n);
	}
	Vector Vector::operator+ (const Vector& v) const {
		return Vector(x + v.x, y + v.y);
	}

	Vector Vector::operator- (const Vector& v) const {
		return Vector(x - v.x, y - v.y);
	}


	float dot(const Vector a, const Vector b){
		return a.x*b.x + a.y*b.y;
	}

}
