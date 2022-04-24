#include "stdio.h"
#include "include/vector.h"
#include "include/object.h"
#include "include/collisions.h"

int main(){
	pe::Circle a(0, 0, 10);
	pe::Circle b(50, 0, 10);

	bool res = pe::checkCollision(a, b);


}
