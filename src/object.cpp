#include "../include/vector.h"
#include "../include/object.h"

#include "math.h"

namespace pe {

	Circle::Circle(float x, float y, float r, float m, bool immovable){
		position.x = x;
		position.y = y;
		radius = r;
		this -> mass = m;
		this -> immovable = immovable;
	}

	Circle::Circle(Vector position, float r, float m, bool immovable){

		this -> position = position;
		radius = r;
		this -> mass = m;
		this -> immovable = immovable;

	}

	float Circle::getVolume() const{
		return radius*radius*M_PI;
	}

	void Circle::getAABB(Vector* a, Vector* b) const {
		return;
	}

}
