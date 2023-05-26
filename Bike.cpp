#include "Bike.h"

using namespace std;

Bike::Bike() : Vehicle() {}


Bike::Bike(int weight, float speed, 
	float FuelConsumptionPerOneHundredKm) : 
	Vehicle(weight, speed, FuelConsumptionPerOneHundredKm) {}

float Bike::FuelConsumption(float time) { return Vehicle::FuelConsumption(time); }

void Bike::Show() {
	cout << "Vehicle type: Bike" << endl;
	Vehicle::Show();
}