#include "Plane.h"

using namespace std;
Plane::Plane() : Vehicle() {}

Plane::Plane(int weight, float speed, float FuelConsumptionPerOneHundredKm) 
	: Vehicle(weight, speed, FuelConsumptionPerOneHundredKm) {}

float Plane::FuelConsumption(float time) 

	{ return Vehicle::FuelConsumption(time); }

void Plane::Show() {
	cout << "Vehicle type: Plane" << endl;
	Vehicle::Show();
}