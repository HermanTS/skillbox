# skillbox
Homework for skillbox curses

#lesson virtual functions
Создайте абстрактный класс Vehicle, содержащий следующие методы:

чистая виртуальная функция print() с параметром типа std::ostream;
перегрузка operator<<;


Создайте два класса WaterVehicle и RoadVehicle, которые наследуют класс Vehicle.

WaterVehicle должен иметь осадку типа float в качестве переменной-члена;
RoadVehicle должен иметь дорожный просвет типа float в качестве переменной-члена;


Создайте два класса Bicycle и Car, который наследуют класс RoadVehicle:

Bicycle должен иметь два колеса класса Wheel в качестве переменных-членов;
Car должен иметь 4 колеса класса Wheel и двигатель класса Engine в качестве переменной-члена;


Создайте два класса Wheel и Engine:

Wheel должен иметь диаметр типа float в качестве переменной-члена;
Engine должен иметь мощность типа float в качестве переменной-члена;


Перегрузите функцию print(), чтобы следующий код произвел следующий вывод:



#include <iostream>



int main()

{

Car c(Engine(150), Wheel(17), Wheel(17), Wheel(18), Wheel(18), 150);

std::cout << c << '\n';



Bicycle t(Wheel(20), Wheel(20), 300);

std::cout << t << '\n';



return 0;

}



Производил следующий результат:

Car Engine: 150 Wheels: 17 17 18 18 Ride height: 150

Bicycle Wheels: 20 20 Ride height: 300



Реализуйте функционал описанный в TODO следующего кода:



#include <iostream>

#include <vector>



int main()

{

std::vector<Vehicle*> v;

v.push_back(new Car(Engine(150), Wheel(17), Wheel(17), Wheel(18), Wheel(18), 250));

v.push_back(new Circle(Point(1, 2, 3), 7));

v.push_back(new Car(Engine(200), Wheel(19), Wheel(19), Wheel(19), Wheel(19), 130));

v.push_back(new WaterVehicle(5000));



//TODO: Вывод элементов вектора v здесь



std::cout << "The highest power is" << getHighestPower(v) << '\n'; // реализуйте эту функцию



//TODO: Удаление элементов вектора v здесь

}
