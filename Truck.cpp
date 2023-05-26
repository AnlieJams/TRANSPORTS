#include "Truck.h"
using namespace std;

Truck::Truck() : Vehicle() {}

Truck::Truck(int weight, float speed, float FuelConsumptionPerOneHundredKm) : 
	
	Vehicle(weight, speed, FuelConsumptionPerOneHundredKm) {}

float Truck::FuelConsumption(float time) { return Vehicle::FuelConsumption(time); }

void Truck::Show() {
	cout << "Vehicle type: Truck" << endl;
	Vehicle::Show();
}