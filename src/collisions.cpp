#include "../include/vector.h"
#include "../include/object.h"
#include "../include/collisions.h"

#include "math.h"

namespace pe {

	bool checkCollision(const Circle a, const Circle b){
		if((a.position - b.position).length() < a.radius + b.radius){
			return true;
		}
		return false;
	}

}
