#include "Car.h"

using namespace std;
Car::Car() : numberOfDoors(0), numberOfWheels(0) {}

Car::Car(int numberOfDoors, int numberOfWheels, 
	float diameter, string firm, int power, int torque, int specificFuelConsumption, int height, int length) :
	numberOfDoors(numberOfDoors), numberOfWheels(numberOfWheels), 
	Wheels(diameter, firm), Engine(power, torque, specificFuelConsumption), Door(height, length) {}

void Car::Show() {
	cout << "Wheels: " << endl << "Number of wheels: " << numberOfWheels << endl;
	Wheels::Show();
	cout << "Engine: " << endl;
	Engine::Show();
	cout << "Doors: " << endl << "Number of doors: " << numberOfDoors << endl;
	Door::Show();
}