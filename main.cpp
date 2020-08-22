#include <iostream>

#include "Vector.h"
#include "DynamicMatrix.h"

#include "Car.h"
#include "Bicycle.h"

void vectorTest();
void matrixTest();

void lessonVFunc_part1();

int main(int argc, char** argv)
{
	lessonVFunc_part1();

	return 0;
}

void lessonVFunc_part1()
{
	Car c(Engine(150), Wheel(17), Wheel(17), Wheel(18), Wheel(18), 150);

	std::cout << c << '\n';

	Bicycle t(Wheel(20), Wheel(20), 300);

	std::cout << t << '\n';
}


void vectorTest()
{
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

void matrixTest() 
{
	DynamicMatrix m(3, 4, "first");
	m.PrintData();

	DynamicMatrix d;
	d.PrintData();
	d = m;
	d.PrintData();

	// creating massive for test copy with data
	const int rows = 2;
	const int collums = 5;
	int testMatrix[rows][collums] = { {0, 1, 2, 4, 5} , {10, 11, 12, 13 ,14} };

	int** testArray = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		testArray[i] = new int[collums];
		for (int j = 0; j < collums; j++)
			testArray[i][j] = testMatrix[i][j];
	}
	DynamicMatrix m2(int(collums), int(rows), testArray, "Full matrix");
	for (int i = 0; i < rows; i++)
	{
		delete[] testArray[i];
	}
	delete[] testArray;

	m2.PrintData();
	m = m2;
	m.PrintData();
}