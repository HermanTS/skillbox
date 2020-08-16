#include <iostream>
#include "Vector.h"

int main(int argc, char **argv) {

	Vector v1(0, 1, 2);
	Vector v2(3, 4, 5);
	Vector v3;

	v3 = v1 + v2;

	std::cout << v3 << "\n";
	std::cout << "lengt of v3 = " << static_cast<float>(v3) << "\n";
	std::cout << "v1 * 2 = " << v1 * 2 << "\n";
	std::cout << "v3 - v2 = " << v3 - v2 << "\n";

	std::cin >> v2;
	std::cout << v2;
}
