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



	float dot(const Vector a, const Vector b){
		return a.x*b.x + a.y*b.y;
	}

}
