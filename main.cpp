#include <iostream>
#include <vector>

#include "Vector.h"
#include "DynamicMatrix.h"

#include "Car.h"
#include "Bicycle.h"
#include "WaterVehicle.h"
#include "Circle.h"

void vectorTest();
void matrixTest();

void lessonVFunc_part1();
void lessonVFunc_part2();

int main(int argc, char** argv)
{
	std::cout << "PART ONE ------------ \n";
	lessonVFunc_part1();

	std::cout << "PATH TWO ------------ \n";
	lessonVFunc_part2();

	return 0;
}

void lessonVFunc_part1()
{
	Car c(Engine(150), Wheel(17), Wheel(17), Wheel(18), Wheel(18), 150);

	std::cout << c << '\n';

	Bicycle t(Wheel(20), Wheel(20), 300);

	std::cout << t << '\n';
}

float getHighestPower(std::vector<Vehicle*> v);

void lessonVFunc_part2()
{
	std::vector<Vehicle*> v;

	v.push_back(new Car(Engine(150), Wheel(17), Wheel(17), Wheel(18), Wheel(18), 250));

	v.push_back(new Circle(Vector(1, 2, 3), 7));

	v.push_back(new Car(Engine(200), Wheel(19), Wheel(19), Wheel(19), Wheel(19), 130));

	v.push_back(new WaterVehicle(5000));

	for (auto it: v)
	{
		std::cout << *it << "\n";
	}

	std::cout << "The highest power is " << getHighestPower(v) << '\n';

    for (auto it: v)
    {
        delete it;
    }
	v.clear();
}

float getHighestPower(std::vector<Vehicle*> v)
{
	float max = 0;
	for (auto it : v)
	{
		if (dynamic_cast<Car*>(it) != nullptr)
		{
			float power = dynamic_cast<Car*>(it)->getEngine().getPower();
			max = (max > power) ? max : power;
		}
	}

	return max;
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
