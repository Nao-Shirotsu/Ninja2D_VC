#include "stdafx.h"

#include <iostream>
#include "coordinate.h"

int main() {

	Coordinate p;

	p.Set(3, 4);

	std::cout << "p.x = " << p.GetX() << " p.y = " << p.GetY() << std::endl;
	std::cout << "distance = " << p.GetDistance() << std::endl;

	return 0;
}