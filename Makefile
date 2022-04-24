main.out: test.cpp src/vector.cpp src/object.cpp src/collisions.cpp
	g++ test.cpp src/vector.cpp src/object.cpp src/collisions.cpp -o main.out
